#ifndef MAINBUSINESS_H
#define MAINBUSINESS_H

#include <QMainWindow>

namespace Ui {
class MainBusiness;
}

class MainBusiness : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainBusiness(QWidget *parent = 0);
    ~MainBusiness();

private:
    Ui::MainBusiness *ui;

public slots:
    void openFormEmpresas();
};

#endif // MAINBUSINESS_H
