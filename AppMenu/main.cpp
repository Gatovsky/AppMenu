#include "mainwindow.h"

#include <QApplication>
#include <QLocale>
#include <QTranslator>
#include <QFile>

int main(int argc, char *argv[]){

    QApplication a(argc, argv);

    /*hoja de estilo qss*/
    QFile hojaEstilo("../themes/MacOs/MacOs.qss");
    hojaEstilo.open(QFile::ReadOnly);
    QString macos = QLatin1String(hojaEstilo.readAll());
    a.setStyleSheet(macos);


    /*traducción es_Mx*/
    QTranslator translator;
    const QStringList uiLanguages = QLocale::system().uiLanguages();
    for (const QString &locale : uiLanguages) {
        const QString baseName = "AppMenu_" + QLocale(locale).name();
        if (translator.load(":/i18n/" + baseName)) {
            a.installTranslator(&translator);
            break;
        }
    }
    MainWindow w;
    w.show();
    return a.exec();
}
