#include "mainbusiness.h"
#include "ui_mainbusiness.h"

#include "empresas/formempresas.h"

MainBusiness::MainBusiness(QWidget *parent) : QMainWindow(parent), ui(new Ui::MainBusiness)
{
    ui->setupUi(this);
}

MainBusiness::~MainBusiness()
{
    delete ui;
}


void MainBusiness::openFormEmpresas()
{
    FormEmpresas *fm = new FormEmpresas(this);
    fm->show();
}
