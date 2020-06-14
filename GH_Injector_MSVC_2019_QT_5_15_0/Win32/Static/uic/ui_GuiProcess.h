/********************************************************************************
** Form generated from reading UI file 'GuiProcess.ui'
**
** Created by: Qt User Interface Compiler version 5.14.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GUIPROCESS_H
#define UI_GUIPROCESS_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_frm_proc
{
public:
    QGridLayout *gridLayout;
    QGridLayout *grid_proc;
    QLabel *lbl_filter;
    QCheckBox *cb_session;
    QPushButton *btn_select;
    QPushButton *btn_refresh;
    QTreeWidget *tree_process;
    QComboBox *cmb_arch;
    QLineEdit *txt_filter;

    void setupUi(QWidget *frm_proc)
    {
        if (frm_proc->objectName().isEmpty())
            frm_proc->setObjectName(QString::fromUtf8("frm_proc"));
        frm_proc->resize(360, 420);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/GuiMain/GH Icon.ico"), QSize(), QIcon::Normal, QIcon::Off);
        frm_proc->setWindowIcon(icon);
        gridLayout = new QGridLayout(frm_proc);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        grid_proc = new QGridLayout();
        grid_proc->setObjectName(QString::fromUtf8("grid_proc"));
        lbl_filter = new QLabel(frm_proc);
        lbl_filter->setObjectName(QString::fromUtf8("lbl_filter"));

        grid_proc->addWidget(lbl_filter, 1, 0, 1, 1);

        cb_session = new QCheckBox(frm_proc);
        cb_session->setObjectName(QString::fromUtf8("cb_session"));
        cb_session->setChecked(true);

        grid_proc->addWidget(cb_session, 3, 2, 1, 1);

        btn_select = new QPushButton(frm_proc);
        btn_select->setObjectName(QString::fromUtf8("btn_select"));

        grid_proc->addWidget(btn_select, 2, 0, 1, 2);

        btn_refresh = new QPushButton(frm_proc);
        btn_refresh->setObjectName(QString::fromUtf8("btn_refresh"));

        grid_proc->addWidget(btn_refresh, 2, 2, 1, 1);

        tree_process = new QTreeWidget(frm_proc);
        tree_process->headerItem()->setText(0, QString());
        new QTreeWidgetItem(tree_process);
        tree_process->setObjectName(QString::fromUtf8("tree_process"));
        tree_process->setSortingEnabled(true);
        tree_process->header()->setMinimumSectionSize(40);
        tree_process->header()->setDefaultSectionSize(40);
        tree_process->header()->setStretchLastSection(true);

        grid_proc->addWidget(tree_process, 0, 0, 1, 3);

        cmb_arch = new QComboBox(frm_proc);
        cmb_arch->addItem(QString());
        cmb_arch->addItem(QString());
        cmb_arch->addItem(QString());
        cmb_arch->setObjectName(QString::fromUtf8("cmb_arch"));

        grid_proc->addWidget(cmb_arch, 3, 0, 1, 2);

        txt_filter = new QLineEdit(frm_proc);
        txt_filter->setObjectName(QString::fromUtf8("txt_filter"));

        grid_proc->addWidget(txt_filter, 1, 1, 1, 2);


        gridLayout->addLayout(grid_proc, 0, 0, 1, 1);

#if QT_CONFIG(shortcut)
        lbl_filter->setBuddy(txt_filter);
#endif // QT_CONFIG(shortcut)

        retranslateUi(frm_proc);

        QMetaObject::connectSlotsByName(frm_proc);
    } // setupUi

    void retranslateUi(QWidget *frm_proc)
    {
        frm_proc->setWindowTitle(QCoreApplication::translate("frm_proc", "Select a process", nullptr));
        lbl_filter->setText(QCoreApplication::translate("frm_proc", "Filter process list:", nullptr));
        cb_session->setText(QCoreApplication::translate("frm_proc", "Current session only", nullptr));
        btn_select->setText(QCoreApplication::translate("frm_proc", "Select", nullptr));
        btn_refresh->setText(QCoreApplication::translate("frm_proc", "Refresh", nullptr));
        QTreeWidgetItem *___qtreewidgetitem = tree_process->headerItem();
        ___qtreewidgetitem->setText(3, QCoreApplication::translate("frm_proc", "Type", nullptr));
        ___qtreewidgetitem->setText(2, QCoreApplication::translate("frm_proc", "Name", nullptr));
        ___qtreewidgetitem->setText(1, QCoreApplication::translate("frm_proc", "PID", nullptr));

        const bool __sortingEnabled = tree_process->isSortingEnabled();
        tree_process->setSortingEnabled(false);
        QTreeWidgetItem *___qtreewidgetitem1 = tree_process->topLevelItem(0);
        ___qtreewidgetitem1->setText(3, QCoreApplication::translate("frm_proc", "NONE", nullptr));
        ___qtreewidgetitem1->setText(2, QCoreApplication::translate("frm_proc", "xxxxxxxxxxxxxxxxxxxxxxx", nullptr));
        ___qtreewidgetitem1->setText(1, QCoreApplication::translate("frm_proc", "123456", nullptr));
        tree_process->setSortingEnabled(__sortingEnabled);

        cmb_arch->setItemText(0, QCoreApplication::translate("frm_proc", "All processes", nullptr));
        cmb_arch->setItemText(1, QCoreApplication::translate("frm_proc", "x64 processes only", nullptr));
        cmb_arch->setItemText(2, QCoreApplication::translate("frm_proc", "x86 processes only", nullptr));

    } // retranslateUi

};

namespace Ui {
    class frm_proc: public Ui_frm_proc {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GUIPROCESS_H
