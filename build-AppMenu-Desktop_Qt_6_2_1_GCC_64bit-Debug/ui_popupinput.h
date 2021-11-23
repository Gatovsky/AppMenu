/********************************************************************************
** Form generated from reading UI file 'popupinput.ui'
**
** Created by: Qt User Interface Compiler version 6.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_POPUPINPUT_H
#define UI_POPUPINPUT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>

QT_BEGIN_NAMESPACE

class Ui_PopUpInput
{
public:
    QSpinBox *spinBox_cantidad;
    QLineEdit *lineEdit_datos;
    QLabel *label_cantidad;
    QLabel *label_datos;
    QPushButton *pushButton_aceptar;

    void setupUi(QDialog *PopUpInput)
    {
        if (PopUpInput->objectName().isEmpty())
            PopUpInput->setObjectName(QString::fromUtf8("PopUpInput"));
        PopUpInput->resize(276, 136);
        spinBox_cantidad = new QSpinBox(PopUpInput);
        spinBox_cantidad->setObjectName(QString::fromUtf8("spinBox_cantidad"));
        spinBox_cantidad->setGeometry(QRect(11, 60, 44, 27));
        lineEdit_datos = new QLineEdit(PopUpInput);
        lineEdit_datos->setObjectName(QString::fromUtf8("lineEdit_datos"));
        lineEdit_datos->setGeometry(QRect(111, 60, 153, 26));
        label_cantidad = new QLabel(PopUpInput);
        label_cantidad->setObjectName(QString::fromUtf8("label_cantidad"));
        label_cantidad->setGeometry(QRect(11, 30, 73, 20));
        QFont font;
        font.setPointSize(11);
        font.setBold(true);
        label_cantidad->setFont(font);
        label_datos = new QLabel(PopUpInput);
        label_datos->setObjectName(QString::fromUtf8("label_datos"));
        label_datos->setGeometry(QRect(111, 30, 60, 18));
        label_datos->setFont(font);
        pushButton_aceptar = new QPushButton(PopUpInput);
        pushButton_aceptar->setObjectName(QString::fromUtf8("pushButton_aceptar"));
        pushButton_aceptar->setGeometry(QRect(180, 100, 80, 26));
        QFont font1;
        font1.setBold(true);
        pushButton_aceptar->setFont(font1);

        retranslateUi(PopUpInput);

        QMetaObject::connectSlotsByName(PopUpInput);
    } // setupUi

    void retranslateUi(QDialog *PopUpInput)
    {
        PopUpInput->setWindowTitle(QCoreApplication::translate("PopUpInput", "Dialog", nullptr));
        label_cantidad->setText(QCoreApplication::translate("PopUpInput", "Cantidad", nullptr));
        label_datos->setText(QCoreApplication::translate("PopUpInput", "Datos", nullptr));
        pushButton_aceptar->setText(QCoreApplication::translate("PopUpInput", "Aceptar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PopUpInput: public Ui_PopUpInput {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_POPUPINPUT_H
