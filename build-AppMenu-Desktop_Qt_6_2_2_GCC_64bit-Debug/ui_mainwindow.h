/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.2.2
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
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
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
    QGridLayout *gridLayout_4;
    QFormLayout *formLayout_2;
    QFormLayout *formLayout;
    QLabel *label_programa;
    QComboBox *comboBox;
    QPushButton *botonEntrada;
    QSpacerItem *verticalSpacer_3;
    QSpacerItem *verticalSpacer;
    QGridLayout *gridLayout;
    QTextEdit *salidaResultado;
    QSpacerItem *verticalSpacer_2;
    QGridLayout *gridLayout_3;
    QTextEdit *textCodigo;
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
        icon.addFile(QString::fromUtf8("../assets/icono.ico"), QSize(), QIcon::Normal, QIcon::Off);
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
        gridLayout_4 = new QGridLayout(centralwidget);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        formLayout_2 = new QFormLayout();
        formLayout_2->setObjectName(QString::fromUtf8("formLayout_2"));
        formLayout_2->setLabelAlignment(Qt::AlignBottom|Qt::AlignLeading|Qt::AlignLeft);
        formLayout = new QFormLayout();
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setVerticalSpacing(6);
        formLayout->setContentsMargins(20, -1, 20, 32);
        label_programa = new QLabel(centralwidget);
        label_programa->setObjectName(QString::fromUtf8("label_programa"));
        QFont font1;
        font1.setPointSize(11);
        font1.setBold(false);
        label_programa->setFont(font1);

        formLayout->setWidget(1, QFormLayout::LabelRole, label_programa);

        comboBox = new QComboBox(centralwidget);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName(QString::fromUtf8("comboBox"));

        formLayout->setWidget(1, QFormLayout::FieldRole, comboBox);

        botonEntrada = new QPushButton(centralwidget);
        botonEntrada->setObjectName(QString::fromUtf8("botonEntrada"));
        QFont font2;
        font2.setBold(true);
        botonEntrada->setFont(font2);

        formLayout->setWidget(2, QFormLayout::FieldRole, botonEntrada);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        formLayout->setItem(3, QFormLayout::FieldRole, verticalSpacer_3);

        verticalSpacer = new QSpacerItem(20, 80, QSizePolicy::Minimum, QSizePolicy::Fixed);

        formLayout->setItem(0, QFormLayout::FieldRole, verticalSpacer);


        formLayout_2->setLayout(0, QFormLayout::LabelRole, formLayout);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setHorizontalSpacing(0);
        gridLayout->setContentsMargins(-1, 0, 20, 31);
        salidaResultado = new QTextEdit(centralwidget);
        salidaResultado->setObjectName(QString::fromUtf8("salidaResultado"));
        QFont font3;
        font3.setPointSize(10);
        font3.setBold(true);
        salidaResultado->setFont(font3);

        gridLayout->addWidget(salidaResultado, 1, 0, 1, 1);

        verticalSpacer_2 = new QSpacerItem(30, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(verticalSpacer_2, 0, 0, 1, 1);


        formLayout_2->setLayout(0, QFormLayout::FieldRole, gridLayout);

        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout_3->setVerticalSpacing(24);
        gridLayout_3->setContentsMargins(20, -1, 20, -1);
        textCodigo = new QTextEdit(centralwidget);
        textCodigo->setObjectName(QString::fromUtf8("textCodigo"));
        QFont font4;
        font4.setPointSize(11);
        textCodigo->setFont(font4);
        textCodigo->setAutoFormatting(QTextEdit::AutoNone);

        gridLayout_3->addWidget(textCodigo, 0, 0, 1, 1);


        formLayout_2->setLayout(1, QFormLayout::SpanningRole, gridLayout_3);


        gridLayout_4->addLayout(formLayout_2, 0, 0, 1, 1);

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
        comboBox->setItemText(3, QCoreApplication::translate("MainWindow", "4-Burbuja", nullptr));
        comboBox->setItemText(4, QCoreApplication::translate("MainWindow", "5-Quick Sort", nullptr));

        botonEntrada->setText(QCoreApplication::translate("MainWindow", "Aceptar", nullptr));
        textCodigo->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Cantarell'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:4; text-indent:0px; font-family:'Cascadia Code PL';\"><br /></p></body></html>", nullptr));
        menuMenu->setTitle(QCoreApplication::translate("MainWindow", "Menu", nullptr));
        menuAcerca_de->setTitle(QCoreApplication::translate("MainWindow", "Ayuda", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
