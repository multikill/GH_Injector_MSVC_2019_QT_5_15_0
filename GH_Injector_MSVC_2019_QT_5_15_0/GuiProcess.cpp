#include "GuiProcess.h"

#include <qfilesystemmodel.h>
#include <QTableWidget>



#include "GuiMain.h"
#include "MyTreeWidget.h"

GuiProcess::GuiProcess(QWidget* parent)
	: QWidget(parent)
{
	ui.setupUi(this);

	// Maybe sometime we need this
	delete ui.tree_process;
	ui.tree_process = new MyTreeWidget(this);
	ui.tree_process->headerItem()->setText(0, QString());
	
	ui.grid_proc->addWidget(ui.tree_process, 0, 0, 1, 3);

	QTreeWidgetItem* ___qtreewidgetitem = ui.tree_process->headerItem();
	___qtreewidgetitem->setText(3, QCoreApplication::translate("frm_proc", "Type", nullptr));
	___qtreewidgetitem->setText(2, QCoreApplication::translate("frm_proc", "Name", nullptr));
	___qtreewidgetitem->setText(1, QCoreApplication::translate("frm_proc", "PID", nullptr));

	QTreeWidgetItem* ___qtreewidgetitem1 = ui.tree_process->topLevelItem(0);
	___qtreewidgetitem1->setText(3, QCoreApplication::translate("frm_proc", "NONE", nullptr));
	___qtreewidgetitem1->setText(2, QCoreApplication::translate("frm_proc", "xxxxxxxxxxxxxxxxxxxxxxx", nullptr));
	___qtreewidgetitem1->setText(1, QCoreApplication::translate("frm_proc", "123456", nullptr));


	connect(ui.btn_refresh, SIGNAL(clicked()), this, SLOT(refresh_process()));
	connect(ui.cmb_arch, SIGNAL(currentIndexChanged(int)), this, SLOT(filter_change(int)));
	connect(ui.txt_filter, &QLineEdit::textChanged, this, &GuiProcess::name_change);
	connect(ui.btn_select, SIGNAL(clicked()), this, SLOT(proc_select()));
	connect(ui.cb_session, SIGNAL(stateChanged(int)), this, SLOT(session_change()));

	for (int i = 0; i <= 3; i++)
		ui.tree_process->resizeColumnToContents(i);

}

GuiProcess::~GuiProcess()
{
}

void GuiProcess::refresh_gui()
{
	// Architecture & session Filter
	int index	= ui.cmb_arch->currentIndex();
	int own_session = getProcSession(GetCurrentProcessId());

	QTreeWidgetItemIterator it(ui.tree_process);
	while (*it)
	{
		QString strArch = (*it)->text(3);
		int arch = GuiMain::str_to_arch(strArch);
		int pid  = (*it)->text(1).toInt();

		if (pid == GetCurrentProcessId())
		{
			++it;
			continue;
		}

		if (index == 0) // All process
		{
			(*it)->setHidden(false);
		}
		else // x86 or x64
		{
			if (arch == index) // show only selected
			{
				(*it)->setHidden(false);
			}
			else
			{
				(*it)->setHidden(true);
			}
		}

		if (ui.cb_session->isChecked())
		{
			int target_session = getProcSession(pid);
			if (target_session != own_session && own_session != -1)
			{
				(*it)->setHidden(true);
			}
		}

		++it;
	}

	// Text Filter
	QString txt = ui.txt_filter->text();
	if (txt.isEmpty())
		return;

	
	QTreeWidgetItemIterator it2(ui.tree_process);
	while (*it2)
	{
		if (!(*it2)->isHidden())
		{
			bool contain = (*it2)->text(2).contains(txt, Qt::CaseInsensitive);
			if (!contain)
			{
				(*it2)->setHidden(true);
			}
		}
		++it2;
	}

	int processCount = 0;
	QTreeWidgetItemIterator it3(ui.tree_process);
	while (*it3)
	{
		if (!(*it3)->isHidden())
			processCount++;
		++it3;
	}

	this->setWindowTitle("Select a process (" + QString::number(processCount) + ')');
}

void GuiProcess::refresh_process()
{
	std::vector<Process_Struct> all_proc;
	getProcessList(all_proc);

	ui.tree_process->clear();

	for (auto proc : all_proc)
	{
		QTreeWidgetItem* item = new QTreeWidgetItem(ui.tree_process);

		item->setText(1, QString::number(proc.pid));
		item->setText(2, proc.name);
		item->setText(3, GuiMain::arch_to_str(proc.arch));

		// https://forum.qt.io/topic/62866/getting-icon-from-external-applications/4
		if (this->parentWidget())
		{		
			model.setRootPath(proc.fullName);
			QIcon ic = model.fileIcon(model.index(proc.fullName));
			item->setIcon(0, ic);
		}

	}

	emit refresh_gui();
}

void GuiProcess::filter_change(int i)
{
	emit refresh_gui();
}

void GuiProcess::session_change()
{
	emit refresh_gui();
}

void GuiProcess::name_change(const QString& str)
{
	emit refresh_gui();
}

void GuiProcess::proc_select()
{
	pss->txtFilter		= ui.txt_filter->text();
	pss->cmbArch		= ui.cmb_arch->currentIndex();
	pss->cbSession		= ui.cb_session->isChecked();

	QTreeWidgetItem* item = ui.tree_process->currentItem();
	if (item)
	{
		ps->pid			= item->text(1).toInt();
		ps->arch		= GuiMain::str_to_arch(item->text(3));
		strcpy(ps->name, item->text(2).toStdString().c_str());
	}
	
	emit send_to_inj(pss, ps);
	//this->hide();
}

void GuiProcess::get_from_inj(Process_State_Struct* procStateStruct, Process_Struct* procStruct)
{
	pss = procStateStruct;
	ps = procStruct;
	
	ui.txt_filter->setText(pss->txtFilter);
	ui.cmb_arch->setCurrentIndex(pss->cmbArch);
	ui.cb_session->setChecked(pss->cbSession);
	memset(ps, 0, sizeof(Process_Struct));

#ifndef _WIN64
	ui.cmb_arch->setDisabled(true);
	ui.cmb_arch->setCurrentIndex(ARCH::X86);
#endif // WIN64

	
	refresh_process();
}