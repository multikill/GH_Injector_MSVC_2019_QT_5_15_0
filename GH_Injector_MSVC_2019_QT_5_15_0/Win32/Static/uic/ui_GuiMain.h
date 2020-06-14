/********************************************************************************
** Form generated from reading UI file 'GuiMain.ui'
**
** Created by: Qt User Interface Compiler version 5.14.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GUIMAIN_H
#define UI_GUIMAIN_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_GuiMainClass
{
public:
    QWidget *centralWidget;
    QGridLayout *gridLayout_5;
    QGroupBox *grp_files;
    QGridLayout *gridLayout_6;
    QPushButton *btn_remove;
    QTreeWidget *tree_files;
    QPushButton *btn_inject;
    QPushButton *btn_add;
    QGroupBox *grp_settings;
    QGridLayout *gridLayout_4;
    QRadioButton *rb_pid;
    QPushButton *btn_proc;
    QComboBox *cmb_proc;
    QLineEdit *txt_pid;
    QLabel *lbl_pid;
    QPushButton *btn_hooks;
    QLabel *lbl_delay;
    QCheckBox *cb_close;
    QLineEdit *txt_delay;
    QRadioButton *rb_proc;
    QLabel *lbl_proc;
    QLineEdit *txt_arch;
    QGroupBox *grp_cloak;
    QGridLayout *gridLayout_3;
    QComboBox *cmb_peh;
    QCheckBox *cb_unlink;
    QCheckBox *cb_copy;
    QCheckBox *cb_random;
    QCheckBox *cb_auto;
    QGroupBox *grp_method;
    QGridLayout *gridLayout;
    QComboBox *cmb_load;
    QCheckBox *cb_hijack;
    QComboBox *cmb_create;
    QCheckBox *cb_clock;
    QLabel *lbl_arch;
    QPushButton *btn_reset;
    QGroupBox *grp_adv;
    QGridLayout *gridLayout_2;
    QCheckBox *cb_imports;
    QCheckBox *cb_clean;
    QCheckBox *cb_shift;
    QCheckBox *cb_delay;
    QCheckBox *cb_seh;
    QCheckBox *cb_main;
    QCheckBox *cb_protection;
    QCheckBox *cb_tls;
    QGroupBox *grp_info;
    QGridLayout *gridLayout_7;
    QPushButton *btn_tooltip;
    QPushButton *btn_help;
    QPushButton *btn_log;
    QPushButton *btn_version;
    QGridLayout *grid_img;
    QSpacerItem *spacer_left;
    QLabel *lbl_img;
    QSpacerItem *spacer_right;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *GuiMainClass)
    {
        if (GuiMainClass->objectName().isEmpty())
            GuiMainClass->setObjectName(QString::fromUtf8("GuiMainClass"));
        GuiMainClass->resize(1205, 601);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/GuiMain/GH Icon.ico"), QSize(), QIcon::Normal, QIcon::Off);
        GuiMainClass->setWindowIcon(icon);
        centralWidget = new QWidget(GuiMainClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        gridLayout_5 = new QGridLayout(centralWidget);
        gridLayout_5->setSpacing(6);
        gridLayout_5->setContentsMargins(11, 11, 11, 11);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        grp_files = new QGroupBox(centralWidget);
        grp_files->setObjectName(QString::fromUtf8("grp_files"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(1);
        sizePolicy.setVerticalStretch(1);
        sizePolicy.setHeightForWidth(grp_files->sizePolicy().hasHeightForWidth());
        grp_files->setSizePolicy(sizePolicy);
        gridLayout_6 = new QGridLayout(grp_files);
        gridLayout_6->setSpacing(6);
        gridLayout_6->setContentsMargins(11, 11, 11, 11);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        btn_remove = new QPushButton(grp_files);
        btn_remove->setObjectName(QString::fromUtf8("btn_remove"));

        gridLayout_6->addWidget(btn_remove, 1, 2, 1, 1);

        tree_files = new QTreeWidget(grp_files);
        new QTreeWidgetItem(tree_files);
        tree_files->setObjectName(QString::fromUtf8("tree_files"));
        tree_files->setEnabled(true);
        tree_files->setSizeAdjustPolicy(QAbstractScrollArea::AdjustToContents);
        tree_files->setItemsExpandable(false);
        tree_files->setSortingEnabled(false);
        tree_files->setHeaderHidden(false);
        tree_files->setExpandsOnDoubleClick(false);
        tree_files->header()->setCascadingSectionResizes(true);
        tree_files->header()->setMinimumSectionSize(50);
        tree_files->header()->setProperty("showSortIndicator", QVariant(false));

        gridLayout_6->addWidget(tree_files, 0, 0, 1, 3);

        btn_inject = new QPushButton(grp_files);
        btn_inject->setObjectName(QString::fromUtf8("btn_inject"));

        gridLayout_6->addWidget(btn_inject, 1, 1, 1, 1);

        btn_add = new QPushButton(grp_files);
        btn_add->setObjectName(QString::fromUtf8("btn_add"));

        gridLayout_6->addWidget(btn_add, 1, 0, 1, 1);


        gridLayout_5->addWidget(grp_files, 1, 2, 1, 1);

        grp_settings = new QGroupBox(centralWidget);
        grp_settings->setObjectName(QString::fromUtf8("grp_settings"));
        QSizePolicy sizePolicy1(QSizePolicy::MinimumExpanding, QSizePolicy::MinimumExpanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(grp_settings->sizePolicy().hasHeightForWidth());
        grp_settings->setSizePolicy(sizePolicy1);
        grp_settings->setMaximumSize(QSize(500, 16777215));
        gridLayout_4 = new QGridLayout(grp_settings);
        gridLayout_4->setSpacing(6);
        gridLayout_4->setContentsMargins(11, 11, 11, 11);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        rb_pid = new QRadioButton(grp_settings);
        rb_pid->setObjectName(QString::fromUtf8("rb_pid"));
        rb_pid->setMaximumSize(QSize(20, 16777215));

        gridLayout_4->addWidget(rb_pid, 1, 1, 1, 1);

        btn_proc = new QPushButton(grp_settings);
        btn_proc->setObjectName(QString::fromUtf8("btn_proc"));

        gridLayout_4->addWidget(btn_proc, 1, 3, 1, 1);

        cmb_proc = new QComboBox(grp_settings);
        cmb_proc->setObjectName(QString::fromUtf8("cmb_proc"));
        cmb_proc->setEditable(true);

        gridLayout_4->addWidget(cmb_proc, 0, 2, 1, 2);

        txt_pid = new QLineEdit(grp_settings);
        txt_pid->setObjectName(QString::fromUtf8("txt_pid"));
        txt_pid->setEnabled(false);
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(txt_pid->sizePolicy().hasHeightForWidth());
        txt_pid->setSizePolicy(sizePolicy2);
        txt_pid->setMaximumSize(QSize(70, 16777215));

        gridLayout_4->addWidget(txt_pid, 1, 2, 1, 1);

        lbl_pid = new QLabel(grp_settings);
        lbl_pid->setObjectName(QString::fromUtf8("lbl_pid"));

        gridLayout_4->addWidget(lbl_pid, 1, 0, 1, 1);

        btn_hooks = new QPushButton(grp_settings);
        btn_hooks->setObjectName(QString::fromUtf8("btn_hooks"));

        gridLayout_4->addWidget(btn_hooks, 9, 3, 1, 1);

        lbl_delay = new QLabel(grp_settings);
        lbl_delay->setObjectName(QString::fromUtf8("lbl_delay"));

        gridLayout_4->addWidget(lbl_delay, 3, 0, 1, 2);

        cb_close = new QCheckBox(grp_settings);
        cb_close->setObjectName(QString::fromUtf8("cb_close"));

        gridLayout_4->addWidget(cb_close, 3, 3, 1, 1);

        txt_delay = new QLineEdit(grp_settings);
        txt_delay->setObjectName(QString::fromUtf8("txt_delay"));
        sizePolicy2.setHeightForWidth(txt_delay->sizePolicy().hasHeightForWidth());
        txt_delay->setSizePolicy(sizePolicy2);
        txt_delay->setMinimumSize(QSize(0, 0));
        txt_delay->setMaximumSize(QSize(70, 16777215));

        gridLayout_4->addWidget(txt_delay, 3, 2, 1, 1);

        rb_proc = new QRadioButton(grp_settings);
        rb_proc->setObjectName(QString::fromUtf8("rb_proc"));
        rb_proc->setMaximumSize(QSize(20, 16777215));
        rb_proc->setChecked(true);

        gridLayout_4->addWidget(rb_proc, 0, 1, 1, 1);

        lbl_proc = new QLabel(grp_settings);
        lbl_proc->setObjectName(QString::fromUtf8("lbl_proc"));

        gridLayout_4->addWidget(lbl_proc, 0, 0, 1, 1);

        txt_arch = new QLineEdit(grp_settings);
        txt_arch->setObjectName(QString::fromUtf8("txt_arch"));
        txt_arch->setEnabled(false);
        sizePolicy2.setHeightForWidth(txt_arch->sizePolicy().hasHeightForWidth());
        txt_arch->setSizePolicy(sizePolicy2);
        txt_arch->setMaximumSize(QSize(70, 16777215));

        gridLayout_4->addWidget(txt_arch, 2, 2, 1, 1);

        grp_cloak = new QGroupBox(grp_settings);
        grp_cloak->setObjectName(QString::fromUtf8("grp_cloak"));
        gridLayout_3 = new QGridLayout(grp_cloak);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        cmb_peh = new QComboBox(grp_cloak);
        cmb_peh->addItem(QString());
        cmb_peh->addItem(QString());
        cmb_peh->addItem(QString());
        cmb_peh->setObjectName(QString::fromUtf8("cmb_peh"));

        gridLayout_3->addWidget(cmb_peh, 0, 0, 1, 1);

        cb_unlink = new QCheckBox(grp_cloak);
        cb_unlink->setObjectName(QString::fromUtf8("cb_unlink"));

        gridLayout_3->addWidget(cb_unlink, 1, 0, 1, 1);

        cb_copy = new QCheckBox(grp_cloak);
        cb_copy->setObjectName(QString::fromUtf8("cb_copy"));

        gridLayout_3->addWidget(cb_copy, 1, 1, 1, 1);

        cb_random = new QCheckBox(grp_cloak);
        cb_random->setObjectName(QString::fromUtf8("cb_random"));

        gridLayout_3->addWidget(cb_random, 0, 1, 1, 1);


        gridLayout_4->addWidget(grp_cloak, 6, 0, 1, 4);

        cb_auto = new QCheckBox(grp_settings);
        cb_auto->setObjectName(QString::fromUtf8("cb_auto"));

        gridLayout_4->addWidget(cb_auto, 2, 3, 1, 1);

        grp_method = new QGroupBox(grp_settings);
        grp_method->setObjectName(QString::fromUtf8("grp_method"));
        gridLayout = new QGridLayout(grp_method);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        cmb_load = new QComboBox(grp_method);
        cmb_load->addItem(QString());
        cmb_load->addItem(QString());
        cmb_load->addItem(QString());
        cmb_load->addItem(QString());
        cmb_load->setObjectName(QString::fromUtf8("cmb_load"));

        gridLayout->addWidget(cmb_load, 0, 0, 1, 1);

        cb_hijack = new QCheckBox(grp_method);
        cb_hijack->setObjectName(QString::fromUtf8("cb_hijack"));

        gridLayout->addWidget(cb_hijack, 0, 1, 1, 1);

        cmb_create = new QComboBox(grp_method);
        cmb_create->addItem(QString());
        cmb_create->addItem(QString());
        cmb_create->addItem(QString());
        cmb_create->addItem(QString());
        cmb_create->setObjectName(QString::fromUtf8("cmb_create"));

        gridLayout->addWidget(cmb_create, 1, 0, 1, 1);

        cb_clock = new QCheckBox(grp_method);
        cb_clock->setObjectName(QString::fromUtf8("cb_clock"));

        gridLayout->addWidget(cb_clock, 1, 1, 1, 1);


        gridLayout_4->addWidget(grp_method, 4, 0, 1, 4);

        lbl_arch = new QLabel(grp_settings);
        lbl_arch->setObjectName(QString::fromUtf8("lbl_arch"));

        gridLayout_4->addWidget(lbl_arch, 2, 0, 1, 2);

        btn_reset = new QPushButton(grp_settings);
        btn_reset->setObjectName(QString::fromUtf8("btn_reset"));

        gridLayout_4->addWidget(btn_reset, 9, 0, 1, 3);

        grp_adv = new QGroupBox(grp_settings);
        grp_adv->setObjectName(QString::fromUtf8("grp_adv"));
        grp_adv->setEnabled(true);
        gridLayout_2 = new QGridLayout(grp_adv);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        cb_imports = new QCheckBox(grp_adv);
        cb_imports->setObjectName(QString::fromUtf8("cb_imports"));

        gridLayout_2->addWidget(cb_imports, 5, 0, 1, 1);

        cb_clean = new QCheckBox(grp_adv);
        cb_clean->setObjectName(QString::fromUtf8("cb_clean"));

        gridLayout_2->addWidget(cb_clean, 3, 0, 1, 1);

        cb_shift = new QCheckBox(grp_adv);
        cb_shift->setObjectName(QString::fromUtf8("cb_shift"));

        gridLayout_2->addWidget(cb_shift, 0, 0, 1, 1);

        cb_delay = new QCheckBox(grp_adv);
        cb_delay->setObjectName(QString::fromUtf8("cb_delay"));

        gridLayout_2->addWidget(cb_delay, 6, 0, 1, 1);

        cb_seh = new QCheckBox(grp_adv);
        cb_seh->setObjectName(QString::fromUtf8("cb_seh"));

        gridLayout_2->addWidget(cb_seh, 0, 1, 1, 1);

        cb_main = new QCheckBox(grp_adv);
        cb_main->setObjectName(QString::fromUtf8("cb_main"));

        gridLayout_2->addWidget(cb_main, 6, 1, 1, 1);

        cb_protection = new QCheckBox(grp_adv);
        cb_protection->setObjectName(QString::fromUtf8("cb_protection"));

        gridLayout_2->addWidget(cb_protection, 3, 1, 1, 1);

        cb_tls = new QCheckBox(grp_adv);
        cb_tls->setObjectName(QString::fromUtf8("cb_tls"));

        gridLayout_2->addWidget(cb_tls, 5, 1, 1, 1);


        gridLayout_4->addWidget(grp_adv, 7, 0, 1, 4);


        gridLayout_5->addWidget(grp_settings, 1, 0, 2, 1);

        grp_info = new QGroupBox(centralWidget);
        grp_info->setObjectName(QString::fromUtf8("grp_info"));
        QSizePolicy sizePolicy3(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy3.setHorizontalStretch(1);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(grp_info->sizePolicy().hasHeightForWidth());
        grp_info->setSizePolicy(sizePolicy3);
        gridLayout_7 = new QGridLayout(grp_info);
        gridLayout_7->setSpacing(6);
        gridLayout_7->setContentsMargins(11, 11, 11, 11);
        gridLayout_7->setObjectName(QString::fromUtf8("gridLayout_7"));
        btn_tooltip = new QPushButton(grp_info);
        btn_tooltip->setObjectName(QString::fromUtf8("btn_tooltip"));
        btn_tooltip->setCheckable(true);
        btn_tooltip->setChecked(true);

        gridLayout_7->addWidget(btn_tooltip, 0, 0, 1, 1);

        btn_help = new QPushButton(grp_info);
        btn_help->setObjectName(QString::fromUtf8("btn_help"));

        gridLayout_7->addWidget(btn_help, 0, 1, 1, 1);

        btn_log = new QPushButton(grp_info);
        btn_log->setObjectName(QString::fromUtf8("btn_log"));

        gridLayout_7->addWidget(btn_log, 0, 2, 1, 1);

        btn_version = new QPushButton(grp_info);
        btn_version->setObjectName(QString::fromUtf8("btn_version"));
        btn_version->setEnabled(true);

        gridLayout_7->addWidget(btn_version, 0, 3, 1, 1);


        gridLayout_5->addWidget(grp_info, 2, 2, 1, 1);

        grid_img = new QGridLayout();
        grid_img->setSpacing(6);
        grid_img->setObjectName(QString::fromUtf8("grid_img"));
        spacer_left = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        grid_img->addItem(spacer_left, 0, 0, 1, 1);

        lbl_img = new QLabel(centralWidget);
        lbl_img->setObjectName(QString::fromUtf8("lbl_img"));

        grid_img->addWidget(lbl_img, 0, 1, 1, 1);

        spacer_right = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        grid_img->addItem(spacer_right, 0, 2, 1, 1);


        gridLayout_5->addLayout(grid_img, 0, 0, 1, 3);

        GuiMainClass->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(GuiMainClass);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        GuiMainClass->setStatusBar(statusBar);
#if QT_CONFIG(shortcut)
        lbl_pid->setBuddy(rb_pid);
        lbl_delay->setBuddy(txt_delay);
        lbl_proc->setBuddy(rb_proc);
#endif // QT_CONFIG(shortcut)

        retranslateUi(GuiMainClass);

        QMetaObject::connectSlotsByName(GuiMainClass);
    } // setupUi

    void retranslateUi(QMainWindow *GuiMainClass)
    {
        GuiMainClass->setWindowTitle(QCoreApplication::translate("GuiMainClass", "GH Injector", nullptr));
        grp_files->setTitle(QCoreApplication::translate("GuiMainClass", "Files", nullptr));
#if QT_CONFIG(tooltip)
        btn_remove->setToolTip(QCoreApplication::translate("GuiMainClass", "<html><head/><body><p>Remove highlighted entries from the list.</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        btn_remove->setText(QCoreApplication::translate("GuiMainClass", "&Remove selected files", nullptr));
        QTreeWidgetItem *___qtreewidgetitem = tree_files->headerItem();
        ___qtreewidgetitem->setText(3, QCoreApplication::translate("GuiMainClass", "Architecture", nullptr));
        ___qtreewidgetitem->setText(2, QCoreApplication::translate("GuiMainClass", "Path", nullptr));
        ___qtreewidgetitem->setText(1, QCoreApplication::translate("GuiMainClass", "Filename", nullptr));
        ___qtreewidgetitem->setText(0, QCoreApplication::translate("GuiMainClass", "Active", nullptr));

        const bool __sortingEnabled = tree_files->isSortingEnabled();
        tree_files->setSortingEnabled(false);
        QTreeWidgetItem *___qtreewidgetitem1 = tree_files->topLevelItem(0);
        ___qtreewidgetitem1->setText(3, QCoreApplication::translate("GuiMainClass", "x86", nullptr));
        ___qtreewidgetitem1->setText(2, QCoreApplication::translate("GuiMainClass", "C:\\dev\\_aoe\\Debug\\AoE_IMGUI - Kopie.dllxxxxx", nullptr));
        ___qtreewidgetitem1->setText(1, QCoreApplication::translate("GuiMainClass", "HelloWorld_x64.dll", nullptr));
        ___qtreewidgetitem1->setText(0, QCoreApplication::translate("GuiMainClass", "YES", nullptr));
        tree_files->setSortingEnabled(__sortingEnabled);

#if QT_CONFIG(tooltip)
        btn_inject->setToolTip(QCoreApplication::translate("GuiMainClass", "<html><head/><body><p>Inject checkmarked dll(s) into the selected process.</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        btn_inject->setText(QCoreApplication::translate("GuiMainClass", "&Inject", nullptr));
#if QT_CONFIG(tooltip)
        btn_add->setToolTip(QCoreApplication::translate("GuiMainClass", "<html><head/><body><p>Select files from disk to add them to the list or drag &amp; drop them into the listview above.</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        btn_add->setText(QCoreApplication::translate("GuiMainClass", "&Add files", nullptr));
        grp_settings->setTitle(QCoreApplication::translate("GuiMainClass", "Settings", nullptr));
#if QT_CONFIG(tooltip)
        rb_pid->setToolTip(QCoreApplication::translate("GuiMainClass", "<html><head/><body><p>Select the target process by it's identifier (unique but changes when the process restarts).</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        rb_pid->setText(QString());
#if QT_CONFIG(tooltip)
        btn_proc->setToolTip(QCoreApplication::translate("GuiMainClass", "<html><head/><body><p>Select a process using the ProcessList\342\204\242.</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        btn_proc->setText(QCoreApplication::translate("GuiMainClass", "&Select process", nullptr));
#if QT_CONFIG(tooltip)
        lbl_pid->setToolTip(QCoreApplication::translate("GuiMainClass", "<html><head/><body><p>Select the target process by it's identifier (unique but changes when the process restarts).</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        lbl_pid->setText(QCoreApplication::translate("GuiMainClass", "PID:", nullptr));
        btn_hooks->setText(QCoreApplication::translate("GuiMainClass", "Scan for hooks", nullptr));
#if QT_CONFIG(tooltip)
        lbl_delay->setToolTip(QCoreApplication::translate("GuiMainClass", "<html><head/><body><p>Delays the injection (in ms).</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        lbl_delay->setText(QCoreApplication::translate("GuiMainClass", "Delay:", nullptr));
#if QT_CONFIG(tooltip)
        cb_close->setToolTip(QCoreApplication::translate("GuiMainClass", "<html><head/><body><p>The injector automatically closes after injecting the checkmarked dll(s).</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        cb_close->setText(QCoreApplication::translate("GuiMainClass", "Close after injection    ", nullptr));
#if QT_CONFIG(tooltip)
        txt_delay->setToolTip(QCoreApplication::translate("GuiMainClass", "<html><head/><body><p><br/></p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        txt_delay->setText(QCoreApplication::translate("GuiMainClass", "0", nullptr));
#if QT_CONFIG(tooltip)
        rb_proc->setToolTip(QCoreApplication::translate("GuiMainClass", "<html><head/><body><p>Select the target process by it's executable name (not unique).</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        rb_proc->setText(QString());
#if QT_CONFIG(tooltip)
        lbl_proc->setToolTip(QCoreApplication::translate("GuiMainClass", "<html><head/><body><p>Select the target process by it's executable name (not unique).</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        lbl_proc->setText(QCoreApplication::translate("GuiMainClass", "Process:", nullptr));
        grp_cloak->setTitle(QCoreApplication::translate("GuiMainClass", "Cloaking", nullptr));
        cmb_peh->setItemText(0, QCoreApplication::translate("GuiMainClass", "Keep PEH", nullptr));
        cmb_peh->setItemText(1, QCoreApplication::translate("GuiMainClass", "Erase PEH", nullptr));
        cmb_peh->setItemText(2, QCoreApplication::translate("GuiMainClass", "Fake PEH", nullptr));

#if QT_CONFIG(tooltip)
        cmb_peh->setToolTip(QCoreApplication::translate("GuiMainClass", "<html><head/><body><p>Keep PEH: Doesn't modify the PE header of the dll(s).</p><p>Erase PEH: Erases the PE header by wrting 0's to it to avoid detections.3</p><p>Fake PEH: Replaces the PE header with the PE header of a normal windows module (eg. kernel32.dll).</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        cb_unlink->setToolTip(QCoreApplication::translate("GuiMainClass", "<html><head/><body><p>Removes the list entry of the dll(s) from the lists in the process enviroment block (not needed for manual mapping).</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        cb_unlink->setText(QCoreApplication::translate("GuiMainClass", "Unlink from PEB", nullptr));
#if QT_CONFIG(tooltip)
        cb_copy->setToolTip(QCoreApplication::translate("GuiMainClass", "<html><head/><body><p>Creates a copy of the dll(s) in the user's temp directory which then get(s) loaded into the target process.</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        cb_copy->setText(QCoreApplication::translate("GuiMainClass", "Load DLL copy", nullptr));
#if QT_CONFIG(tooltip)
        cb_random->setToolTip(QCoreApplication::translate("GuiMainClass", "<html><head/><body><p>Renames the dll(s) randomly before injecting it/them.</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        cb_random->setText(QCoreApplication::translate("GuiMainClass", "Randomize file name", nullptr));
#if QT_CONFIG(tooltip)
        cb_auto->setToolTip(QCoreApplication::translate("GuiMainClass", "<html><head/><body><p>If the injector finds the target process, it automatically injects the checkmarked dll(s).</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        cb_auto->setText(QCoreApplication::translate("GuiMainClass", "Auto Inject", nullptr));
        grp_method->setTitle(QCoreApplication::translate("GuiMainClass", "Method", nullptr));
        cmb_load->setItemText(0, QCoreApplication::translate("GuiMainClass", "LoadLibraryExW", nullptr));
        cmb_load->setItemText(1, QCoreApplication::translate("GuiMainClass", "LdrLoadDll", nullptr));
        cmb_load->setItemText(2, QCoreApplication::translate("GuiMainClass", "LdrpLoadDll", nullptr));
        cmb_load->setItemText(3, QCoreApplication::translate("GuiMainClass", "ManualMap", nullptr));

#if QT_CONFIG(tooltip)
        cmb_load->setToolTip(QCoreApplication::translate("GuiMainClass", "<html><head/><body><p>LoadLibraryExW is the default injection method which simply uses LoadLibraryExW.</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(whatsthis)
        cmb_load->setWhatsThis(QCoreApplication::translate("GuiMainClass", "<html><head/><body><p><br/></p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
#if QT_CONFIG(tooltip)
        cb_hijack->setToolTip(QCoreApplication::translate("GuiMainClass", "<html><head/><body><p>Hijacks a handle from another process.</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        cb_hijack->setText(QCoreApplication::translate("GuiMainClass", "Hijack handle", nullptr));
        cmb_create->setItemText(0, QCoreApplication::translate("GuiMainClass", "NtCreateThreadEx", nullptr));
        cmb_create->setItemText(1, QCoreApplication::translate("GuiMainClass", "Thread Hijacking", nullptr));
        cmb_create->setItemText(2, QCoreApplication::translate("GuiMainClass", "SetWindowsHookEx", nullptr));
        cmb_create->setItemText(3, QCoreApplication::translate("GuiMainClass", "QueueUserAPC", nullptr));

#if QT_CONFIG(tooltip)
        cmb_create->setToolTip(QCoreApplication::translate("GuiMainClass", "<html><head/><body><p>NtCreateThreadEx: Creates a simple remote thread to load the dll(s).</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        cb_clock->setToolTip(QCoreApplication::translate("GuiMainClass", "<html><head/><body><p>Attempts to hide the thread from debuggers, fakes the startaddress and disables thread attach/detach calls.</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        cb_clock->setText(QCoreApplication::translate("GuiMainClass", "Cloak thread", nullptr));
        lbl_arch->setText(QCoreApplication::translate("GuiMainClass", "Architecture:", nullptr));
        btn_reset->setText(QCoreApplication::translate("GuiMainClass", "&Reset settings", nullptr));
        grp_adv->setTitle(QCoreApplication::translate("GuiMainClass", "Manuel mapping", nullptr));
#if QT_CONFIG(tooltip)
        cb_imports->setToolTip(QCoreApplication::translate("GuiMainClass", "<html><head/><body><p>resolves dll imports</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        cb_imports->setText(QCoreApplication::translate("GuiMainClass", "Resolve imports", nullptr));
#if QT_CONFIG(tooltip)
        cb_clean->setToolTip(QCoreApplication::translate("GuiMainClass", "<html><head/><body><p>removes data from the dlls PE header</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        cb_clean->setText(QCoreApplication::translate("GuiMainClass", "Clean data directories", nullptr));
#if QT_CONFIG(tooltip)
        cb_shift->setToolTip(QCoreApplication::translate("GuiMainClass", "<html><head/><body><p>Shifts the image by a randomly generated amount of bytes (manual mapping only).</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        cb_shift->setText(QCoreApplication::translate("GuiMainClass", "Shift module", nullptr));
#if QT_CONFIG(tooltip)
        cb_delay->setToolTip(QCoreApplication::translate("GuiMainClass", "<html><head/><body><p>resolves delayed imports</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        cb_delay->setText(QCoreApplication::translate("GuiMainClass", "Resolve delay imports", nullptr));
#if QT_CONFIG(tooltip)
        cb_seh->setToolTip(QCoreApplication::translate("GuiMainClass", "<html><head/><body><p>enables exception handling</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        cb_seh->setText(QCoreApplication::translate("GuiMainClass", "Enable SEH", nullptr));
#if QT_CONFIG(tooltip)
        cb_main->setToolTip(QCoreApplication::translate("GuiMainClass", "<html><head/><body><p>executes DllMain</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        cb_main->setText(QCoreApplication::translate("GuiMainClass", "Run DllMain", nullptr));
#if QT_CONFIG(tooltip)
        cb_protection->setToolTip(QCoreApplication::translate("GuiMainClass", "<html><head/><body><p>sets page protections based on section characteristics</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        cb_protection->setText(QCoreApplication::translate("GuiMainClass", "Set page protections", nullptr));
#if QT_CONFIG(tooltip)
        cb_tls->setToolTip(QCoreApplication::translate("GuiMainClass", "<html><head/><body><p>executes TLS callbacks and initializes static TLS data</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        cb_tls->setText(QCoreApplication::translate("GuiMainClass", "Execute TLS", nullptr));
        grp_info->setTitle(QCoreApplication::translate("GuiMainClass", "Info", nullptr));
#if QT_CONFIG(tooltip)
        btn_tooltip->setToolTip(QCoreApplication::translate("GuiMainClass", "<html><head/><body><p>You won't have to see this again.</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        btn_tooltip->setText(QCoreApplication::translate("GuiMainClass", "&Disable tooltips", nullptr));
#if QT_CONFIG(tooltip)
        btn_help->setToolTip(QCoreApplication::translate("GuiMainClass", "<html><head/><body><p>Open the release thread (guidedhacking.com/ghinjector) for support.</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        btn_help->setText(QCoreApplication::translate("GuiMainClass", "&Help", nullptr));
#if QT_CONFIG(tooltip)
        btn_log->setToolTip(QCoreApplication::translate("GuiMainClass", "<html><head/><body><p>Open the changelog on pastebin.</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        btn_log->setText(QCoreApplication::translate("GuiMainClass", "&Changelog", nullptr));
        btn_version->setText(QCoreApplication::translate("GuiMainClass", "&Version 3.x", nullptr));
        lbl_img->setText(QCoreApplication::translate("GuiMainClass", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class GuiMainClass: public Ui_GuiMainClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GUIMAIN_H
