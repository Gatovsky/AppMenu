#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "insercion.h"
#include "intercambio.h"
#include "seleccion.h"
#include "bits/stdc++.h"


using namespace std;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::ImprimirValores(QString str1, QString str2, QString str3){
  ui->salidaResultado->setText("Array desordenado: "+ str1+ "\n"+
                               "Array Ordenado por método de "+ str3+":"+"\n"+
                               str2);
}


QString MainWindow::QVector2Qstring(QVector<int> v){
  QString str;
  for(int i=0; i<v.size(); i++){
      str.append(QString::number(v[i])+" ");
    }
  return str;
}


QVector<int> MainWindow::QString2QVector(QString str, int longitud){
  QVector<int> v;
  for(int i=0; i<longitud; i++){
      int num = str.split(" ")[i].toInt();
      v.push_back(num);
    }
  return v;
}

void MainWindow::IngresarDatos(){
  entradadatos = new entradaDatos(this);
  entradadatos->exec();
  setCantidad(entradadatos->getCantidad());
  setDatos(entradadatos->getDatos());
}


void MainWindow::on_botonEntrada_clicked(){
    char char_sel;
    QString str_sel = ui->comboBox->currentText();
    string tmp_str = str_sel.toStdString();
    char_sel = tmp_str[0];

    switch (char_sel) {
      case '1':{
          Insercion inser{};
          QVector<int>v, v_desordenado = inser.getVector();
          QString str_v, str_v_desordenado;

          str_v_desordenado= QVector2Qstring(v_desordenado);

          inser.metodoInsercion();
          v = inser.getVector();
          str_v= QVector2Qstring(v);

          ImprimirValores(str_v_desordenado, str_v, "Inserción");

          break;
        }

      case '2':{
          Intercambio inter{};
          QVector<int> v, v_desordenado = inter.getVector();
          QString str_v_ordenado, str_v_desordenado;

          str_v_desordenado= QVector2Qstring(v_desordenado);


          inter.metodoIntercambio();
          v = inter.getVector();
          str_v_ordenado= QVector2Qstring(v);

          ImprimirValores(str_v_desordenado, str_v_ordenado, "Intercambio");

          break;
        }
      case '3':{

          QString str_v_ordenado; QVector<int> v_ordenado;

          IngresarDatos();

          QVector<int> v_datos = QString2QVector(str_datos, cantidad);

          Seleccion selec{};
          selec.setTam(cantidad);
          selec.setVector(v_datos);

          selec.metodoSeleccion();
          v_ordenado= selec.getVector();

          str_v_ordenado = QVector2Qstring(v_ordenado);

          ImprimirValores(str_datos, str_v_ordenado, "Selección");

          break;
        }
      default:
        break;
    }
}

