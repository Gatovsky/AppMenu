/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionCerrar;
    QAction *actionAcerca_de_AppMenu;
    QAction *actionInforme_de_errores;
    QWidget *centralwidget;
    QLabel *salidaResultado;
    QWidget *layoutWidget;
    QFormLayout *formLayout;
    QLabel *label_programa;
    QComboBox *comboBox;
    QPushButton *botonEntrada;
    QScrollArea *scrollCodigo;
    QWidget *scrollAreaWidgetContents;
    QMenuBar *menubar;
    QMenu *menuMenu;
    QMenu *menuAcerca_de;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(792, 572);
        MainWindow->setToolButtonStyle(Qt::ToolButtonFollowStyle);
        MainWindow->setUnifiedTitleAndToolBarOnMac(false);
        actionCerrar = new QAction(MainWindow);
        actionCerrar->setObjectName(QString::fromUtf8("actionCerrar"));
        actionAcerca_de_AppMenu = new QAction(MainWindow);
        actionAcerca_de_AppMenu->setObjectName(QString::fromUtf8("actionAcerca_de_AppMenu"));
        actionInforme_de_errores = new QAction(MainWindow);
        actionInforme_de_errores->setObjectName(QString::fromUtf8("actionInforme_de_errores"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        salidaResultado = new QLabel(centralwidget);
        salidaResultado->setObjectName(QString::fromUtf8("salidaResultado"));
        salidaResultado->setGeometry(QRect(300, 30, 441, 111));
        QFont font;
        font.setPointSize(10);
        font.setBold(true);
        salidaResultado->setFont(font);
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(40, 56, 192, 60));
        formLayout = new QFormLayout(layoutWidget);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setContentsMargins(0, 0, 0, 0);
        label_programa = new QLabel(layoutWidget);
        label_programa->setObjectName(QString::fromUtf8("label_programa"));
        QFont font1;
        font1.setPointSize(11);
        font1.setBold(false);
        label_programa->setFont(font1);

        formLayout->setWidget(0, QFormLayout::LabelRole, label_programa);

        comboBox = new QComboBox(layoutWidget);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName(QString::fromUtf8("comboBox"));

        formLayout->setWidget(0, QFormLayout::FieldRole, comboBox);

        botonEntrada = new QPushButton(layoutWidget);
        botonEntrada->setObjectName(QString::fromUtf8("botonEntrada"));
        QFont font2;
        font2.setBold(true);
        botonEntrada->setFont(font2);

        formLayout->setWidget(1, QFormLayout::FieldRole, botonEntrada);

        scrollCodigo = new QScrollArea(centralwidget);
        scrollCodigo->setObjectName(QString::fromUtf8("scrollCodigo"));
        scrollCodigo->setGeometry(QRect(40, 180, 711, 341));
        scrollCodigo->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(255, 0, 0, 255), stop:0.166 rgba(255, 255, 0, 255), stop:0.333 rgba(0, 255, 0, 255), stop:0.5 rgba(0, 255, 255, 255), stop:0.666 rgba(0, 0, 255, 255), stop:0.833 rgba(255, 0, 255, 255), stop:1 rgba(255, 0, 0, 255));"));
        scrollCodigo->setFrameShape(QFrame::StyledPanel);
        scrollCodigo->setFrameShadow(QFrame::Sunken);
        scrollCodigo->setLineWidth(4);
        scrollCodigo->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 709, 339));
        scrollCodigo->setWidget(scrollAreaWidgetContents);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 792, 23));
        menuMenu = new QMenu(menubar);
        menuMenu->setObjectName(QString::fromUtf8("menuMenu"));
        menuAcerca_de = new QMenu(menubar);
        menuAcerca_de->setObjectName(QString::fromUtf8("menuAcerca_de"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menuMenu->menuAction());
        menubar->addAction(menuAcerca_de->menuAction());
        menuMenu->addAction(actionCerrar);
        menuAcerca_de->addAction(actionAcerca_de_AppMenu);
        menuAcerca_de->addAction(actionInforme_de_errores);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        actionCerrar->setText(QCoreApplication::translate("MainWindow", "Cerrar", nullptr));
        actionAcerca_de_AppMenu->setText(QCoreApplication::translate("MainWindow", "Acerca de AppMenu", nullptr));
        actionInforme_de_errores->setText(QCoreApplication::translate("MainWindow", "Informe de errores", nullptr));
        salidaResultado->setText(QString());
        label_programa->setText(QCoreApplication::translate("MainWindow", "Programa", nullptr));
        comboBox->setItemText(0, QCoreApplication::translate("MainWindow", "1-Inserci\303\263n", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("MainWindow", "2-Intercambio", nullptr));
        comboBox->setItemText(2, QCoreApplication::translate("MainWindow", "3-Selecci\303\263n", nullptr));

        botonEntrada->setText(QCoreApplication::translate("MainWindow", "Aceptar", nullptr));
        menuMenu->setTitle(QCoreApplication::translate("MainWindow", "Menu", nullptr));
        menuAcerca_de->setTitle(QCoreApplication::translate("MainWindow", "Ayuda", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
