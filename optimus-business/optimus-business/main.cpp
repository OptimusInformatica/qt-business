#include "mainbusiness.h"
#include <QApplication>
#include <QtCore>
#include <QSqlDatabase>
#include <QSqlError>

void logger(QtMsgType type, const QMessageLogContext &context, const QString &msg)
{
    QByteArray data = msg.toLocal8Bit();
    QByteArray date = QDateTime::currentDateTime().toString("[dd.MM.yyyy hh:mm:ss]").toLocal8Bit();
    FILE *handle = fopen("business.log", "a+");
    switch (type) {
    case QtDebugMsg:
        fprintf(stdout, "[DEBU] %s [%s:%u %s] [%s]\n", date.constData(), context.file, context.line, context.function,  data.constData());
        fprintf(handle, "[DEBU] %s [%s:%u %s] [%s]\n", date.constData(), context.file, context.line, context.function,  data.constData());
        break;
    case QtInfoMsg:
        fprintf(stdout, "[INFO] %s [%s:%u %s] [%s]\n", date.constData(), context.file, context.line, context.function,  data.constData());
        fprintf(handle, "[INFO] %s [%s:%u %s] [%s]\n", date.constData(), context.file, context.line, context.function,  data.constData());
        break;
    case QtWarningMsg:
        fprintf(stderr, "[WARN] %s [%s:%u %s] [%s]\n", date.constData(), context.file, context.line, context.function,  data.constData());
        fprintf(handle, "[WARN] %s [%s:%u %s] [%s]\n", date.constData(), context.file, context.line, context.function,  data.constData());
        break;
    case QtCriticalMsg:
        fprintf(stderr, "[CRIT] %s [%s:%u %s] [%s]\n", date.constData(), context.file, context.line, context.function,  data.constData());
        fprintf(handle, "[CRIT] %s [%s:%u %s] [%s]\n", date.constData(), context.file, context.line, context.function,  data.constData());
        break;
    case QtFatalMsg:
        fprintf(stderr, "[FATA] %s [%s:%u %s] [%s]\n", date.constData(), context.file, context.line, context.function,  data.constData());
        fprintf(handle, "[FATA] %s [%s:%u %s] [%s]\n", date.constData(), context.file, context.line, context.function,  data.constData());
        break;
    }
    fclose(handle);
}

int main(int argc, char *argv[])
{
    qInstallMessageHandler(logger);

    QCoreApplication::setOrganizationName("Optimus Informatica");
    QCoreApplication::setOrganizationDomain("optimusinformatica.com.br");
    QCoreApplication::setApplicationName("Optimus Business");
    QCoreApplication::setApplicationVersion("1.0.0");


    QApplication a(argc, argv);
    MainBusiness w;

    QSettings config;
    config.setValue("database/type", "QPSQL");
    config.setValue("database/host", "localhost");
    config.setValue("database/port", 5432);
    config.setValue("database/name", "optimus_bsn");
    config.setValue("database/user", "optimus");
    config.setValue("database/pass", "optimus");
    config.sync();

    QSqlDatabase dbh = QSqlDatabase::addDatabase(config.value("database/type").toString());
    dbh.setHostName(config.value("database/host").toString());
    dbh.setDatabaseName(config.value("database/name").toString());
    dbh.setUserName(config.value("database/user").toString());
    dbh.setPassword(config.value("database/pass").toString());

    if (!dbh.open())
    {
        qCritical() << dbh.lastError().text();
    }

    w.show();

    return a.exec();
}
