#ifndef EMPRESASMODEL_H
#define EMPRESASMODEL_H

#include "libempresas-qt_global.h"
#include <QObject>
#include <QAbstractTableModel>
#include <QSqlQuery>
#include <QSqlError>
#include <QSqlRecord>

class LIBEMPRESASQTSHARED_EXPORT EmpresasModel : public QAbstractTableModel
{
    Q_OBJECT
public:
    QList<QMap<QString, QVariant>> rows;
    const QVariantList columns = QVariantList() << "Código"
                                                << "Empresa"
                                                << "Nome"
                                                << "CNPJ"
                                                << "Inscr. Estadual"
                                                << "Inscr. Municipal"
                                                << "Telefone"
                                                << "E-mail"
                                                << "CEP"
                                                << "Numero"
                                                << "Registrado por"
                                                << "Registrado em";


    explicit EmpresasModel(QObject *parent = nullptr);
    int rowCount(const QModelIndex &parent) const;
    int columnCount(const QModelIndex &parent) const;
    QVariant headerData(int section, Qt::Orientation orientation, int role) const;
    QVariant data(const QModelIndex &index, int role) const;
    bool setData(const QModelIndex &index, const QVariant &value, int role = Qt::EditRole);
    bool addData(int row, QString field, const QVariant &value, int role=Qt::EditRole);
    bool insertRows(int row, int count, const QModelIndex &parent = QModelIndex());

private:
    QStringList keys;
    QMap<QString, int> k_map;
    const QStringList cnames = QStringList() << "cod_empresa"
                                             << "empresa"
                                             << "nome"
                                             << "documento"
                                             << "ie"
                                             << "im"
                                             << "phone"
                                             << "email"
                                             << "cep"
                                             << "numero"
                                             << "usuario"
                                             << "registro";
signals:
    void errorReport(QString msg);

public slots:
};

#endif // EMPRESASMODEL_H
