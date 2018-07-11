/********************************************************************************
** Form generated from reading UI file 'mainbusiness.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINBUSINESS_H
#define UI_MAINBUSINESS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainBusiness
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainBusiness)
    {
        if (MainBusiness->objectName().isEmpty())
            MainBusiness->setObjectName(QStringLiteral("MainBusiness"));
        MainBusiness->resize(400, 300);
        menuBar = new QMenuBar(MainBusiness);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        MainBusiness->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainBusiness);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainBusiness->addToolBar(mainToolBar);
        centralWidget = new QWidget(MainBusiness);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        MainBusiness->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(MainBusiness);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainBusiness->setStatusBar(statusBar);

        retranslateUi(MainBusiness);

        QMetaObject::connectSlotsByName(MainBusiness);
    } // setupUi

    void retranslateUi(QMainWindow *MainBusiness)
    {
        MainBusiness->setWindowTitle(QApplication::translate("MainBusiness", "MainBusiness", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainBusiness: public Ui_MainBusiness {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINBUSINESS_H
