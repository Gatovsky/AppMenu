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
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionCerrar;
    QAction *actionAcerca;
    QAction *actionAcerca_de_Qt;
    QWidget *centralwidget;
    QWidget *layoutWidget;
    QFormLayout *formLayout;
    QLabel *label_programa;
    QComboBox *comboBox;
    QPushButton *botonEntrada;
    QTextEdit *textCodigo;
    QTextEdit *salidaResultado;
    QMenuBar *menubar;
    QMenu *menuMenu;
    QMenu *menuAcerca_de;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(792, 606);
        QIcon icon;
        icon.addFile(QString::fromUtf8("../assets/menu.png"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        MainWindow->setToolButtonStyle(Qt::ToolButtonIconOnly);
        MainWindow->setUnifiedTitleAndToolBarOnMac(false);
        actionCerrar = new QAction(MainWindow);
        actionCerrar->setObjectName(QString::fromUtf8("actionCerrar"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8("../assets/cerrar-sesion.png"), QSize(), QIcon::Normal, QIcon::On);
        actionCerrar->setIcon(icon1);
        QFont font;
        font.setPointSize(10);
        actionCerrar->setFont(font);
        actionAcerca = new QAction(MainWindow);
        actionAcerca->setObjectName(QString::fromUtf8("actionAcerca"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8("../assets/informacion.png"), QSize(), QIcon::Normal, QIcon::On);
        actionAcerca->setIcon(icon2);
        actionAcerca->setFont(font);
        actionAcerca_de_Qt = new QAction(MainWindow);
        actionAcerca_de_Qt->setObjectName(QString::fromUtf8("actionAcerca_de_Qt"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8("../assets/qt.png"), QSize(), QIcon::Normal, QIcon::On);
        actionAcerca_de_Qt->setIcon(icon3);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(40, 60, 221, 101));
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

        textCodigo = new QTextEdit(centralwidget);
        textCodigo->setObjectName(QString::fromUtf8("textCodigo"));
        textCodigo->setGeometry(QRect(40, 180, 711, 361));
        QFont font3;
        font3.setFamilies({QString::fromUtf8("Cascadia Code PL")});
        font3.setPointSize(11);
        textCodigo->setFont(font3);
        salidaResultado = new QTextEdit(centralwidget);
        salidaResultado->setObjectName(QString::fromUtf8("salidaResultado"));
        salidaResultado->setGeometry(QRect(270, 59, 481, 101));
        QFont font4;
        font4.setPointSize(10);
        font4.setBold(true);
        salidaResultado->setFont(font4);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 792, 22));
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
        menuAcerca_de->addAction(actionAcerca);
        menuAcerca_de->addAction(actionAcerca_de_Qt);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "AppMenu", nullptr));
        actionCerrar->setText(QCoreApplication::translate("MainWindow", "Cerrar", nullptr));
#if QT_CONFIG(shortcut)
        actionCerrar->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+Q", nullptr));
#endif // QT_CONFIG(shortcut)
        actionAcerca->setText(QCoreApplication::translate("MainWindow", "Acerca de AppMenu", nullptr));
        actionAcerca_de_Qt->setText(QCoreApplication::translate("MainWindow", "Acerca de Qt", nullptr));
#if QT_CONFIG(tooltip)
        actionAcerca_de_Qt->setToolTip(QCoreApplication::translate("MainWindow", "AcercadeQt", nullptr));
#endif // QT_CONFIG(tooltip)
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
