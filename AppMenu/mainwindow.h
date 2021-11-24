#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <bits/stdc++.h>
#include <entradadatos.h>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    void ImprimirValores(QString str1, QString str2, QString str3);
    QString QVector2Qstring(QVector<int> v);
    QVector<int> QString2QVector(QString str, int longitud);

private slots:
    void on_botonEntrada_clicked();

    //void on_comboBox_activated(const QString &arg1);

private:
    Ui::MainWindow *ui;
    entradaDatos *entradadatos;

};
#endif // MAINWINDOW_H
