#ifndef FORMEMPRESAS_H
#define FORMEMPRESAS_H

#include <QDialog>
#include <QtCore>
#include <QMessageBox>
#include <QSqlQuery>
#include <QSqlError>
#include <QLineEdit>

#include "../../libempresas-qt/empresasmodel.h"

namespace Ui {
class FormEmpresas;
}

/**
 * @brief Thread para pesquisar endereço através do CEP
 * @version 1.0.0.1
 * @date 11-07-2018
 * @author Brasilio Thomazo
 */
class ThreadAddress : public QThread
{
    Q_OBJECT
public:
    /**
     * @brief Thread para pesquisar o endereço através do CEP
     * @param cep QString
     * @param rua QLineEdit *
     * @param bairro QLineEdit *
     * @param cidade QLineEdit *
     * @param uf QLineEdit *
     * @param parent QObject *
     */
    ThreadAddress(QString cep, QLineEdit *rua, QLineEdit *bairro, QLineEdit *cidade, QLineEdit *uf, QObject *parent = nullptr);
    void run() override;
private:
    QString cep;
    QLineEdit *rua, *bairro, *cidade, *uf;
signals:
    void resultReday();
};

class FormEmpresas : public QDialog
{
    Q_OBJECT
public:
    explicit FormEmpresas(QWidget *parent = 0);
    ~FormEmpresas();

private:
    Ui::FormEmpresas *ui; /**< Objeto para os controles do formulário */
    EmpresasModel *model; /**< EmpresaModel modelo da QTableView */

public slots:
    /** @brief Adicionar uma nova empresa ao banco de dados e a tabela */
    void addEmpresa();
    /** @brief Faz a busca do endereço através do CEP */
    void getAddress();
};

#endif // FORMEMPRESAS_H
