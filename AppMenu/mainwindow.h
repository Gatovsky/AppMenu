#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QMessageBox>
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

    void IngresarDatos();

    int getCantidad(){
      return this->cantidad;
    }

    void setCantidad(int n){
      this->cantidad=n;
    }

    QString getDatos(){
      return this->str_datos;
    }

    void setDatos(QString str){
      this->str_datos= str;
    }

private slots:
    void on_botonEntrada_clicked();

private:
    Ui::MainWindow *ui;
    entradaDatos *entradadatos;
    int cantidad;
    QString str_datos;

};
#endif // MAINWINDOW_H
