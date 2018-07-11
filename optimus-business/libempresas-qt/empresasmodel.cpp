#include "empresasmodel.h"

EmpresasModel::EmpresasModel(QObject *parent) : QAbstractTableModel(parent)
{
    QSqlQuery q;
    q.prepare("select * from bsn_empresa");
    if (q.exec())
    {
        QSqlRecord record = q.record();
        for (int i=0; i<record.count(); i++)
        {
            keys.append(record.fieldName(i));
            k_map.insert(record.fieldName(i), i);
        }
        while (q.next())
        {
            QMap<QString, QVariant> map;
            for (int i=0; i<keys.size(); i++)
            {
                map.insert(keys[i], q.value(i));
            }
            rows.append(map);
        }
    }
}

int EmpresasModel::rowCount(const QModelIndex &parent) const
{
    Q_UNUSED(parent);
    return rows.size();
}

int EmpresasModel::columnCount(const QModelIndex &parent) const
{
    Q_UNUSED(parent);
    return columns.size();
}

QVariant EmpresasModel::headerData(int section, Qt::Orientation orientation, int role) const
{
    switch (role) {
    case Qt::DisplayRole:
        switch (orientation) {
        case Qt::Horizontal:
            return columns[section];
            break;
        }
        break;
    }
    return QVariant();
}

QVariant EmpresasModel::data(const QModelIndex &index, int role) const
{
    switch (role) {
    case Qt::DisplayRole:
        return rows[index.row()][cnames[index.column()]];
        break;
    }
    return QVariant();
}

bool EmpresasModel::setData(const QModelIndex &index, const QVariant &value, int role)
{
    if (!index.isValid() || role != Qt::EditRole)
    {
        return false;
    }
    rows[index.row()][keys[index.column()]] = value;
    emit dataChanged(index, index);
    return true;
}

bool EmpresasModel::addData(int row, QString field, const QVariant &value, int role)
{
    return setData(index(row, k_map[field]), value, role);
}

bool EmpresasModel::insertRows(int row, int count, const QModelIndex &parent)
{
    Q_UNUSED(parent);
    if (row < 0 || count < 1 || row > rows.size())
    {
        return false;
    }
    beginInsertRows(QModelIndex(), row, row + count - 1);
    QMap<QString, QVariant> map;
    for (int i=0; i<keys.size(); i++)
    {
        map.insert(keys[i], QVariant());
    }
    rows.append(map);
    endInsertRows();
    return true;
}
