#include "formempresas.h"
#include "ui_formempresas.h"

FormEmpresas::FormEmpresas(QWidget *parent) : QDialog(parent), ui(new Ui::FormEmpresas)
{
    ui->setupUi(this);
    model = new EmpresasModel;
    ui->table->setModel(model);
}

FormEmpresas::~FormEmpresas()
{
    delete ui;
}

void FormEmpresas::addEmpresa()
{
    int row = model->rows.size();
    model->insertRows(row, 1);
    model->addData(row, "empresa", ui->empresa->text());
    model->addData(row, "nome", ui->nome->text());
    model->addData(row, "documento", ui->cnpj->text());
}

void FormEmpresas::getAddress()
{
    ThreadAddress *th = new ThreadAddress(ui->cep->text(), ui->rua, ui->bairro, ui->cidade, ui->uf);
    th->start();
}

ThreadAddress::ThreadAddress(QString cep, QLineEdit *rua, QLineEdit *bairro, QLineEdit *cidade, QLineEdit *uf, QObject *parent) : QThread(parent)
{
    this->cep = cep;
    this->rua = rua;
    this->bairro = bairro;
    this->cidade = cidade;
    this->uf = uf;
}

void ThreadAddress::run()
{
    QSqlQuery q;
    q.prepare("select * from bsn_address where cep=?");
    q.addBindValue(cep);
    if (!q.exec())
    {
        qWarning() << q.lastError().text();
        return ;
    }

    if (!q.next())
    {
        return ;
    }
    rua->setText(q.value("rua").toString());
    bairro->setText(q.value("bairro").toString());
    cidade->setText(q.value("cidade").toString());
    uf->setText(q.value("uf").toString());
}
