#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QMessageBox>
#include <QFile>
#include <QTextStream>
#include <QDebug>
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

    QString AbrirArchivo(QString str);

    void ImprimirArchivo(QString str);


    void ContarLineas(QString str);

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

    void setCantidadlineas(int lineas){
        this->cantidadLineas=lineas;
    }

    int getCantidadLineas(){
        return this->cantidadLineas;
    }

private slots:
    void sel_metodo_clicked();
    //void action_cerrar();
    void action_acercaqt();
    void action_acercade();

private:
    Ui::MainWindow *ui;
    entradaDatos *entradadatos;
    int cantidad;
    int cantidadLineas;
    QString str_datos;

};
#endif // MAINWINDOW_H
