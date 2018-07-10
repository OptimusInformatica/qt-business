#include "mainbusiness.h"
#include "ui_mainbusiness.h"

MainBusiness::MainBusiness(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainBusiness)
{
    ui->setupUi(this);
}

MainBusiness::~MainBusiness()
{
    delete ui;
}
