/********************************************************************************
** Form generated from reading UI file 'entradadatos.ui'
**
** Created by: Qt User Interface Compiler version 6.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ENTRADADATOS_H
#define UI_ENTRADADATOS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>

QT_BEGIN_NAMESPACE

class Ui_entradaDatos
{
public:
    QPushButton *pushButton;
    QLabel *label;
    QLabel *label_2;
    QSpinBox *spinBoxCantidad;
    QLineEdit *lineDatos;

    void setupUi(QDialog *entradaDatos)
    {
        if (entradaDatos->objectName().isEmpty())
            entradaDatos->setObjectName(QString::fromUtf8("entradaDatos"));
        entradaDatos->resize(294, 145);
        pushButton = new QPushButton(entradaDatos);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(180, 110, 80, 26));
        QFont font;
        font.setBold(true);
        pushButton->setFont(font);
        label = new QLabel(entradaDatos);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(30, 10, 71, 18));
        QFont font1;
        font1.setPointSize(11);
        font1.setBold(true);
        label->setFont(font1);
        label_2 = new QLabel(entradaDatos);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(110, 10, 58, 18));
        label_2->setFont(font1);
        spinBoxCantidad = new QSpinBox(entradaDatos);
        spinBoxCantidad->setObjectName(QString::fromUtf8("spinBoxCantidad"));
        spinBoxCantidad->setGeometry(QRect(30, 60, 42, 27));
        lineDatos = new QLineEdit(entradaDatos);
        lineDatos->setObjectName(QString::fromUtf8("lineDatos"));
        lineDatos->setGeometry(QRect(110, 60, 151, 26));

        retranslateUi(entradaDatos);

        QMetaObject::connectSlotsByName(entradaDatos);
    } // setupUi

    void retranslateUi(QDialog *entradaDatos)
    {
        entradaDatos->setWindowTitle(QCoreApplication::translate("entradaDatos", "Dialog", nullptr));
        pushButton->setText(QCoreApplication::translate("entradaDatos", "Enviar", nullptr));
        label->setText(QCoreApplication::translate("entradaDatos", "Cantidad", nullptr));
        label_2->setText(QCoreApplication::translate("entradaDatos", "Datos", nullptr));
    } // retranslateUi

};

namespace Ui {
    class entradaDatos: public Ui_entradaDatos {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ENTRADADATOS_H
