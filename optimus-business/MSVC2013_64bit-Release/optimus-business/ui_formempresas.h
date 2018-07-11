/********************************************************************************
** Form generated from reading UI file 'formempresas.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORMEMPRESAS_H
#define UI_FORMEMPRESAS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTableView>

QT_BEGIN_NAMESPACE

class Ui_FormEmpresas
{
public:
    QGridLayout *gridLayout_9;
    QTableView *table;
    QGroupBox *groupBox_3;
    QGridLayout *gridLayout_8;
    QGridLayout *gridLayout;
    QLabel *label;
    QLineEdit *empresa;
    QLabel *label_2;
    QLineEdit *nome;
    QGridLayout *gridLayout_2;
    QLabel *label_3;
    QLineEdit *cnpj;
    QLabel *label_4;
    QLineEdit *ie;
    QLabel *label_5;
    QLineEdit *im;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_7;
    QGridLayout *gridLayout_3;
    QLabel *label_6;
    QLineEdit *cep;
    QLabel *label_7;
    QLineEdit *rua;
    QLabel *label_8;
    QSpinBox *numero;
    QLabel *label_9;
    QLineEdit *complemento;
    QGridLayout *gridLayout_4;
    QLabel *label_10;
    QLineEdit *bairro;
    QLabel *label_11;
    QLineEdit *cidade;
    QLabel *label_12;
    QLineEdit *uf;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_6;
    QGridLayout *gridLayout_5;
    QLineEdit *phone;
    QLabel *label_14;
    QLineEdit *email;
    QLabel *label_13;
    QSpacerItem *horizontalSpacer;
    QPushButton *cancel;
    QPushButton *save;

    void setupUi(QDialog *FormEmpresas)
    {
        if (FormEmpresas->objectName().isEmpty())
            FormEmpresas->setObjectName(QStringLiteral("FormEmpresas"));
        FormEmpresas->resize(1024, 600);
        gridLayout_9 = new QGridLayout(FormEmpresas);
        gridLayout_9->setObjectName(QStringLiteral("gridLayout_9"));
        table = new QTableView(FormEmpresas);
        table->setObjectName(QStringLiteral("table"));

        gridLayout_9->addWidget(table, 0, 0, 1, 3);

        groupBox_3 = new QGroupBox(FormEmpresas);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        gridLayout_8 = new QGridLayout(groupBox_3);
        gridLayout_8->setObjectName(QStringLiteral("gridLayout_8"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label = new QLabel(groupBox_3);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        empresa = new QLineEdit(groupBox_3);
        empresa->setObjectName(QStringLiteral("empresa"));
        empresa->setMaximumSize(QSize(220, 16777215));

        gridLayout->addWidget(empresa, 0, 1, 1, 1);

        label_2 = new QLabel(groupBox_3);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 0, 2, 1, 1);

        nome = new QLineEdit(groupBox_3);
        nome->setObjectName(QStringLiteral("nome"));

        gridLayout->addWidget(nome, 0, 3, 1, 1);


        gridLayout_8->addLayout(gridLayout, 0, 0, 1, 1);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        label_3 = new QLabel(groupBox_3);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout_2->addWidget(label_3, 0, 0, 1, 1);

        cnpj = new QLineEdit(groupBox_3);
        cnpj->setObjectName(QStringLiteral("cnpj"));

        gridLayout_2->addWidget(cnpj, 0, 1, 1, 1);

        label_4 = new QLabel(groupBox_3);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout_2->addWidget(label_4, 0, 2, 1, 1);

        ie = new QLineEdit(groupBox_3);
        ie->setObjectName(QStringLiteral("ie"));

        gridLayout_2->addWidget(ie, 0, 3, 1, 1);

        label_5 = new QLabel(groupBox_3);
        label_5->setObjectName(QStringLiteral("label_5"));

        gridLayout_2->addWidget(label_5, 0, 4, 1, 1);

        im = new QLineEdit(groupBox_3);
        im->setObjectName(QStringLiteral("im"));

        gridLayout_2->addWidget(im, 0, 5, 1, 1);


        gridLayout_8->addLayout(gridLayout_2, 1, 0, 1, 1);


        gridLayout_9->addWidget(groupBox_3, 1, 0, 1, 3);

        groupBox = new QGroupBox(FormEmpresas);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        gridLayout_7 = new QGridLayout(groupBox);
        gridLayout_7->setObjectName(QStringLiteral("gridLayout_7"));
        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        label_6 = new QLabel(groupBox);
        label_6->setObjectName(QStringLiteral("label_6"));

        gridLayout_3->addWidget(label_6, 0, 0, 1, 1);

        cep = new QLineEdit(groupBox);
        cep->setObjectName(QStringLiteral("cep"));
        cep->setMaximumSize(QSize(120, 16777215));

        gridLayout_3->addWidget(cep, 0, 1, 1, 1);

        label_7 = new QLabel(groupBox);
        label_7->setObjectName(QStringLiteral("label_7"));

        gridLayout_3->addWidget(label_7, 0, 2, 1, 1);

        rua = new QLineEdit(groupBox);
        rua->setObjectName(QStringLiteral("rua"));

        gridLayout_3->addWidget(rua, 0, 3, 1, 1);

        label_8 = new QLabel(groupBox);
        label_8->setObjectName(QStringLiteral("label_8"));

        gridLayout_3->addWidget(label_8, 0, 4, 1, 1);

        numero = new QSpinBox(groupBox);
        numero->setObjectName(QStringLiteral("numero"));
        numero->setMinimumSize(QSize(70, 0));

        gridLayout_3->addWidget(numero, 0, 5, 1, 1);

        label_9 = new QLabel(groupBox);
        label_9->setObjectName(QStringLiteral("label_9"));

        gridLayout_3->addWidget(label_9, 0, 6, 1, 1);

        complemento = new QLineEdit(groupBox);
        complemento->setObjectName(QStringLiteral("complemento"));
        complemento->setMaximumSize(QSize(250, 16777215));

        gridLayout_3->addWidget(complemento, 0, 7, 1, 1);


        gridLayout_7->addLayout(gridLayout_3, 0, 0, 1, 1);

        gridLayout_4 = new QGridLayout();
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        label_10 = new QLabel(groupBox);
        label_10->setObjectName(QStringLiteral("label_10"));

        gridLayout_4->addWidget(label_10, 0, 0, 1, 1);

        bairro = new QLineEdit(groupBox);
        bairro->setObjectName(QStringLiteral("bairro"));

        gridLayout_4->addWidget(bairro, 0, 1, 1, 1);

        label_11 = new QLabel(groupBox);
        label_11->setObjectName(QStringLiteral("label_11"));

        gridLayout_4->addWidget(label_11, 0, 2, 1, 1);

        cidade = new QLineEdit(groupBox);
        cidade->setObjectName(QStringLiteral("cidade"));

        gridLayout_4->addWidget(cidade, 0, 3, 1, 1);

        label_12 = new QLabel(groupBox);
        label_12->setObjectName(QStringLiteral("label_12"));

        gridLayout_4->addWidget(label_12, 0, 4, 1, 1);

        uf = new QLineEdit(groupBox);
        uf->setObjectName(QStringLiteral("uf"));
        uf->setMaximumSize(QSize(50, 16777215));

        gridLayout_4->addWidget(uf, 0, 5, 1, 1);


        gridLayout_7->addLayout(gridLayout_4, 1, 0, 1, 1);


        gridLayout_9->addWidget(groupBox, 2, 0, 1, 3);

        groupBox_2 = new QGroupBox(FormEmpresas);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        gridLayout_6 = new QGridLayout(groupBox_2);
        gridLayout_6->setObjectName(QStringLiteral("gridLayout_6"));
        gridLayout_5 = new QGridLayout();
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        phone = new QLineEdit(groupBox_2);
        phone->setObjectName(QStringLiteral("phone"));
        phone->setMaximumSize(QSize(170, 16777215));

        gridLayout_5->addWidget(phone, 0, 1, 1, 1);

        label_14 = new QLabel(groupBox_2);
        label_14->setObjectName(QStringLiteral("label_14"));

        gridLayout_5->addWidget(label_14, 0, 2, 1, 1);

        email = new QLineEdit(groupBox_2);
        email->setObjectName(QStringLiteral("email"));

        gridLayout_5->addWidget(email, 0, 3, 1, 1);

        label_13 = new QLabel(groupBox_2);
        label_13->setObjectName(QStringLiteral("label_13"));

        gridLayout_5->addWidget(label_13, 0, 0, 1, 1);


        gridLayout_6->addLayout(gridLayout_5, 0, 0, 1, 1);


        gridLayout_9->addWidget(groupBox_2, 3, 0, 1, 3);

        horizontalSpacer = new QSpacerItem(841, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_9->addItem(horizontalSpacer, 4, 0, 1, 1);

        cancel = new QPushButton(FormEmpresas);
        cancel->setObjectName(QStringLiteral("cancel"));

        gridLayout_9->addWidget(cancel, 4, 1, 1, 1);

        save = new QPushButton(FormEmpresas);
        save->setObjectName(QStringLiteral("save"));

        gridLayout_9->addWidget(save, 4, 2, 1, 1);


        retranslateUi(FormEmpresas);
        QObject::connect(cancel, SIGNAL(clicked()), FormEmpresas, SLOT(reject()));
        QObject::connect(save, SIGNAL(clicked()), FormEmpresas, SLOT(addEmpresa()));
        QObject::connect(cep, SIGNAL(editingFinished()), FormEmpresas, SLOT(getAddress()));

        QMetaObject::connectSlotsByName(FormEmpresas);
    } // setupUi

    void retranslateUi(QDialog *FormEmpresas)
    {
        FormEmpresas->setWindowTitle(QApplication::translate("FormEmpresas", "Dialog", 0));
        groupBox_3->setTitle(QApplication::translate("FormEmpresas", "Empresa", 0));
        label->setText(QApplication::translate("FormEmpresas", "Empresa:", 0));
        label_2->setText(QApplication::translate("FormEmpresas", "Raz\303\243o Social:", 0));
        label_3->setText(QApplication::translate("FormEmpresas", "CNPJ:", 0));
        cnpj->setInputMask(QApplication::translate("FormEmpresas", "99.999.999/9999-99", 0));
        label_4->setText(QApplication::translate("FormEmpresas", "Inscr. Estadual:", 0));
        label_5->setText(QApplication::translate("FormEmpresas", "Inscr. Municipal:", 0));
        groupBox->setTitle(QApplication::translate("FormEmpresas", "Endere\303\247o", 0));
        label_6->setText(QApplication::translate("FormEmpresas", "CEP:", 0));
        cep->setInputMask(QApplication::translate("FormEmpresas", "99999-999", 0));
        label_7->setText(QApplication::translate("FormEmpresas", "Rua:", 0));
        label_8->setText(QApplication::translate("FormEmpresas", "N\302\272:", 0));
        label_9->setText(QApplication::translate("FormEmpresas", "Complemento:", 0));
        label_10->setText(QApplication::translate("FormEmpresas", "Bairro:", 0));
        label_11->setText(QApplication::translate("FormEmpresas", "Cidade:", 0));
        label_12->setText(QApplication::translate("FormEmpresas", "UF:", 0));
        uf->setInputMask(QApplication::translate("FormEmpresas", "AA", 0));
        groupBox_2->setTitle(QApplication::translate("FormEmpresas", "Contato", 0));
        phone->setInputMask(QApplication::translate("FormEmpresas", "(00) 0000-0000", 0));
        label_14->setText(QApplication::translate("FormEmpresas", "E-mail:", 0));
        label_13->setText(QApplication::translate("FormEmpresas", "Telefone:", 0));
        cancel->setText(QApplication::translate("FormEmpresas", "Cancelar", 0));
        save->setText(QApplication::translate("FormEmpresas", "Salvar", 0));
    } // retranslateUi

};

namespace Ui {
    class FormEmpresas: public Ui_FormEmpresas {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORMEMPRESAS_H
