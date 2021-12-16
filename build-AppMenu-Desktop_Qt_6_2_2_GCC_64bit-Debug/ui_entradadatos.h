/********************************************************************************
** Form generated from reading UI file 'entradadatos.ui'
**
** Created by: Qt User Interface Compiler version 6.2.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ENTRADADATOS_H
#define UI_ENTRADADATOS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>

QT_BEGIN_NAMESPACE

class Ui_entradaDatos
{
public:
    QGridLayout *gridLayout;
    QLabel *label;
    QLabel *label_2;
    QSpinBox *spinBoxCantidad;
    QLineEdit *lineDatos;
    QPushButton *pushButton;

    void setupUi(QDialog *entradaDatos)
    {
        if (entradaDatos->objectName().isEmpty())
            entradaDatos->setObjectName(QString::fromUtf8("entradaDatos"));
        entradaDatos->resize(213, 120);
        entradaDatos->setMinimumSize(QSize(0, 0));
        entradaDatos->setMaximumSize(QSize(400, 200));
        gridLayout = new QGridLayout(entradaDatos);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(entradaDatos);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setPointSize(11);
        font.setBold(true);
        label->setFont(font);

        gridLayout->addWidget(label, 0, 0, 1, 1);

        label_2 = new QLabel(entradaDatos);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setFont(font);

        gridLayout->addWidget(label_2, 0, 1, 1, 1);

        spinBoxCantidad = new QSpinBox(entradaDatos);
        spinBoxCantidad->setObjectName(QString::fromUtf8("spinBoxCantidad"));

        gridLayout->addWidget(spinBoxCantidad, 1, 0, 1, 1);

        lineDatos = new QLineEdit(entradaDatos);
        lineDatos->setObjectName(QString::fromUtf8("lineDatos"));

        gridLayout->addWidget(lineDatos, 1, 1, 1, 2);

        pushButton = new QPushButton(entradaDatos);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        QFont font1;
        font1.setBold(true);
        pushButton->setFont(font1);

        gridLayout->addWidget(pushButton, 2, 2, 1, 1);


        retranslateUi(entradaDatos);

        QMetaObject::connectSlotsByName(entradaDatos);
    } // setupUi

    void retranslateUi(QDialog *entradaDatos)
    {
        entradaDatos->setWindowTitle(QCoreApplication::translate("entradaDatos", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("entradaDatos", "Cantidad", nullptr));
        label_2->setText(QCoreApplication::translate("entradaDatos", "Datos", nullptr));
        pushButton->setText(QCoreApplication::translate("entradaDatos", "Enviar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class entradaDatos: public Ui_entradaDatos {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ENTRADADATOS_H
