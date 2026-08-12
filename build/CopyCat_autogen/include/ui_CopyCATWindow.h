/********************************************************************************
** Form generated from reading UI file 'CopyCATWindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COPYCATWINDOW_H
#define UI_COPYCATWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CopyCATWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QLabel *lblCount;
    QListView *listViewHistory;
    QPushButton *btnClear;

    void setupUi(QMainWindow *CopyCATWindow)
    {
        if (CopyCATWindow->objectName().isEmpty())
            CopyCATWindow->setObjectName(QString::fromUtf8("CopyCATWindow"));
        CopyCATWindow->resize(350, 450);
        centralwidget = new QWidget(CopyCATWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        lblCount = new QLabel(centralwidget);
        lblCount->setObjectName(QString::fromUtf8("lblCount"));

        verticalLayout->addWidget(lblCount);

        listViewHistory = new QListView(centralwidget);
        listViewHistory->setObjectName(QString::fromUtf8("listViewHistory"));

        verticalLayout->addWidget(listViewHistory);

        btnClear = new QPushButton(centralwidget);
        btnClear->setObjectName(QString::fromUtf8("btnClear"));

        verticalLayout->addWidget(btnClear);

        CopyCATWindow->setCentralWidget(centralwidget);

        retranslateUi(CopyCATWindow);

        QMetaObject::connectSlotsByName(CopyCATWindow);
    } // setupUi

    void retranslateUi(QMainWindow *CopyCATWindow)
    {
        lblCount->setText(QCoreApplication::translate("CopyCATWindow", "Itens salvos: 0", nullptr));
        btnClear->setText(QCoreApplication::translate("CopyCATWindow", "Limpar Hist\303\263rico", nullptr));
        (void)CopyCATWindow;
    } // retranslateUi

};

namespace Ui {
    class CopyCATWindow: public Ui_CopyCATWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COPYCATWINDOW_H
