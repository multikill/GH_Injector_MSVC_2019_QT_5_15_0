/********************************************************************************
** Form generated from reading UI file 'GuiScanHook.ui'
**
** Created by: Qt User Interface Compiler version 5.14.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GUISCANHOOK_H
#define UI_GUISCANHOOK_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QListView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Form
{
public:
    QGridLayout *gridLayout_2;
    QGridLayout *gridLayout;
    QPushButton *btn_unhook;
    QPushButton *btn_scan;
    QListView *lv_scanhook;

    void setupUi(QWidget *Form)
    {
        if (Form->objectName().isEmpty())
            Form->setObjectName(QString::fromUtf8("Form"));
        Form->resize(318, 231);
        gridLayout_2 = new QGridLayout(Form);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        btn_unhook = new QPushButton(Form);
        btn_unhook->setObjectName(QString::fromUtf8("btn_unhook"));

        gridLayout->addWidget(btn_unhook, 1, 1, 1, 1);

        btn_scan = new QPushButton(Form);
        btn_scan->setObjectName(QString::fromUtf8("btn_scan"));

        gridLayout->addWidget(btn_scan, 1, 0, 1, 1);

        lv_scanhook = new QListView(Form);
        lv_scanhook->setObjectName(QString::fromUtf8("lv_scanhook"));
        lv_scanhook->setEditTriggers(QAbstractItemView::NoEditTriggers);
        lv_scanhook->setSelectionMode(QAbstractItemView::MultiSelection);
        lv_scanhook->setModelColumn(0);

        gridLayout->addWidget(lv_scanhook, 0, 0, 1, 2);


        gridLayout_2->addLayout(gridLayout, 0, 0, 1, 1);


        retranslateUi(Form);

        QMetaObject::connectSlotsByName(Form);
    } // setupUi

    void retranslateUi(QWidget *Form)
    {
        Form->setWindowTitle(QCoreApplication::translate("Form", "Scan for hooks", nullptr));
        btn_unhook->setText(QCoreApplication::translate("Form", "Unhook", nullptr));
        btn_scan->setText(QCoreApplication::translate("Form", "Scan PID 42", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Form: public Ui_Form {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GUISCANHOOK_H
