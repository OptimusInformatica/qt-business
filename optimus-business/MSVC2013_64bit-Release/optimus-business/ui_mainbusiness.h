/********************************************************************************
** Form generated from reading UI file 'mainbusiness.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINBUSINESS_H
#define UI_MAINBUSINESS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainBusiness
{
public:
    QAction *regUsuarios;
    QAction *regEmpresas;
    QAction *regClientes;
    QAction *regFabricantes;
    QAction *regTipos;
    QAction *regCategorias;
    QAction *addUsuarios;
    QAction *addEmpresas;
    QAction *addClientes;
    QAction *addFabricantes;
    QAction *addTipos;
    QAction *addCategorias;
    QWidget *centralWidget;
    QTableView *tableView;
    QMenuBar *menuBar;
    QMenu *menuArquivo;
    QMenu *menuUsu_rios;
    QMenu *menuEmpresas;
    QMenu *regProdutos;
    QMenu *menuClientes;
    QMenu *addProdutos;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainBusiness)
    {
        if (MainBusiness->objectName().isEmpty())
            MainBusiness->setObjectName(QStringLiteral("MainBusiness"));
        MainBusiness->resize(1024, 600);
        regUsuarios = new QAction(MainBusiness);
        regUsuarios->setObjectName(QStringLiteral("regUsuarios"));
        regEmpresas = new QAction(MainBusiness);
        regEmpresas->setObjectName(QStringLiteral("regEmpresas"));
        regClientes = new QAction(MainBusiness);
        regClientes->setObjectName(QStringLiteral("regClientes"));
        regFabricantes = new QAction(MainBusiness);
        regFabricantes->setObjectName(QStringLiteral("regFabricantes"));
        regTipos = new QAction(MainBusiness);
        regTipos->setObjectName(QStringLiteral("regTipos"));
        regCategorias = new QAction(MainBusiness);
        regCategorias->setObjectName(QStringLiteral("regCategorias"));
        addUsuarios = new QAction(MainBusiness);
        addUsuarios->setObjectName(QStringLiteral("addUsuarios"));
        addEmpresas = new QAction(MainBusiness);
        addEmpresas->setObjectName(QStringLiteral("addEmpresas"));
        addClientes = new QAction(MainBusiness);
        addClientes->setObjectName(QStringLiteral("addClientes"));
        addFabricantes = new QAction(MainBusiness);
        addFabricantes->setObjectName(QStringLiteral("addFabricantes"));
        addTipos = new QAction(MainBusiness);
        addTipos->setObjectName(QStringLiteral("addTipos"));
        addCategorias = new QAction(MainBusiness);
        addCategorias->setObjectName(QStringLiteral("addCategorias"));
        centralWidget = new QWidget(MainBusiness);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        tableView = new QTableView(centralWidget);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setGeometry(QRect(10, 10, 1001, 521));
        MainBusiness->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainBusiness);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1024, 21));
        menuArquivo = new QMenu(menuBar);
        menuArquivo->setObjectName(QStringLiteral("menuArquivo"));
        menuUsu_rios = new QMenu(menuBar);
        menuUsu_rios->setObjectName(QStringLiteral("menuUsu_rios"));
        menuEmpresas = new QMenu(menuBar);
        menuEmpresas->setObjectName(QStringLiteral("menuEmpresas"));
        regProdutos = new QMenu(menuEmpresas);
        regProdutos->setObjectName(QStringLiteral("regProdutos"));
        menuClientes = new QMenu(menuBar);
        menuClientes->setObjectName(QStringLiteral("menuClientes"));
        addProdutos = new QMenu(menuClientes);
        addProdutos->setObjectName(QStringLiteral("addProdutos"));
        MainBusiness->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainBusiness);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainBusiness->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainBusiness);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainBusiness->setStatusBar(statusBar);

        menuBar->addAction(menuArquivo->menuAction());
        menuBar->addAction(menuUsu_rios->menuAction());
        menuBar->addAction(menuEmpresas->menuAction());
        menuBar->addAction(menuClientes->menuAction());
        menuEmpresas->addAction(regUsuarios);
        menuEmpresas->addAction(regEmpresas);
        menuEmpresas->addAction(regClientes);
        menuEmpresas->addAction(regProdutos->menuAction());
        regProdutos->addAction(regFabricantes);
        regProdutos->addAction(regTipos);
        regProdutos->addAction(regCategorias);
        menuClientes->addAction(addUsuarios);
        menuClientes->addSeparator();
        menuClientes->addAction(addEmpresas);
        menuClientes->addSeparator();
        menuClientes->addAction(addClientes);
        menuClientes->addSeparator();
        menuClientes->addAction(addProdutos->menuAction());
        addProdutos->addAction(addFabricantes);
        addProdutos->addAction(addTipos);
        addProdutos->addAction(addCategorias);

        retranslateUi(MainBusiness);
        QObject::connect(regEmpresas, SIGNAL(triggered()), MainBusiness, SLOT(openFormEmpresas()));

        QMetaObject::connectSlotsByName(MainBusiness);
    } // setupUi

    void retranslateUi(QMainWindow *MainBusiness)
    {
        MainBusiness->setWindowTitle(QApplication::translate("MainBusiness", "MainBusiness", 0));
        regUsuarios->setText(QApplication::translate("MainBusiness", "Usu\303\241rios", 0));
        regEmpresas->setText(QApplication::translate("MainBusiness", "Empresas", 0));
        regClientes->setText(QApplication::translate("MainBusiness", "Clientes", 0));
        regFabricantes->setText(QApplication::translate("MainBusiness", "Fabricantes", 0));
        regTipos->setText(QApplication::translate("MainBusiness", "Tipos", 0));
        regCategorias->setText(QApplication::translate("MainBusiness", "Categorias", 0));
        addUsuarios->setText(QApplication::translate("MainBusiness", "Usu\303\241rios", 0));
        addEmpresas->setText(QApplication::translate("MainBusiness", "Empresas", 0));
        addClientes->setText(QApplication::translate("MainBusiness", "Clientes", 0));
        addFabricantes->setText(QApplication::translate("MainBusiness", "Fabricantes", 0));
        addTipos->setText(QApplication::translate("MainBusiness", "Tipos", 0));
        addCategorias->setText(QApplication::translate("MainBusiness", "Categorias", 0));
        menuArquivo->setTitle(QApplication::translate("MainBusiness", "Arquivo", 0));
        menuUsu_rios->setTitle(QApplication::translate("MainBusiness", "Editar", 0));
        menuEmpresas->setTitle(QApplication::translate("MainBusiness", "Registros", 0));
        regProdutos->setTitle(QApplication::translate("MainBusiness", "Produtos", 0));
        menuClientes->setTitle(QApplication::translate("MainBusiness", "Registrar", 0));
        addProdutos->setTitle(QApplication::translate("MainBusiness", "Produtos", 0));
    } // retranslateUi

};

namespace Ui {
    class MainBusiness: public Ui_MainBusiness {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINBUSINESS_H
