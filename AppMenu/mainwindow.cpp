#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "insercion.h"
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



void MainWindow::on_botonEntrada_clicked(){
    char char_sel;
    QString str_sel = ui->comboBox->currentText();
    string tmp_str = str_sel.toStdString();
    char_sel = tmp_str[0];

    switch (char_sel) {
      case '1':{
          Insercion inser{};
          QVector<int> v_desordenado = inser.getVector();
          QString str_v, str_v_desordenado;

          for(int i=0; i<v_desordenado.size(); i++){
              str_v_desordenado.append(QString::number(v_desordenado[i])+" ");
            }

          inser.metodoInsercion();
          QVector<int> v = inser.getVector();


          for(int i=0; i<v.size(); i++){
              str_v.append(QString::number(v[i])+" ");
            }

          ui->salidaResultado->setText("Array desordenado: "+ str_v_desordenado+ "\n"+
                                       "Array Ordenado por el método de Inserción:\n"+
                                       str_v);
          break;
        }

      case '2':
        ui->salidaResultado->setText("Nothing to do in case 2");
        break;
      case '3':
        ui ->salidaResultado->setText(("Nothing to do in case 3"));
        break;
      default:
        break;
    }
}

