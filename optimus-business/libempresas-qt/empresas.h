#ifndef EMPRESAS_H
#define EMPRESAS_H

#include "libempresas-qt_global.h"
#include <QtCore>

class LIBEMPRESASQTSHARED_EXPORT Empresas : public QObject
{
    Q_OBJECT

public:
    Empresas(QObject *parent = nullptr);
};

#endif // EMPRESAS_H
