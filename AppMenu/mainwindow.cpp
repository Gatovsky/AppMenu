#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "insercion.h"
#include "intercambio.h"
#include "seleccion.h"



using namespace std;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->botonEntrada,SIGNAL(clicked()), this, SLOT(sel_metodo_clicked()));
    connect(ui->actionCerrar, SIGNAL(triggered()), this, SLOT(close()));
    connect(ui->actionAcerca_de_Qt, SIGNAL(triggered()), this, SLOT(action_acercaqt()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::action_acercaqt(){
    QMessageBox::aboutQt(this, "Qt");
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
  entradadatos->close();
}

void MainWindow::ImprimirArchivo(QString str){
    QFile archivo;
    archivo.setFileName(str);
    if(!archivo.exists()){
        qDebug() << "file not found";

    }
    archivo.open(QIODevice::ReadOnly | QIODevice::Text);
    if(!archivo.isOpen()){
        qDebug() << "file cannot be opened";
    }
    QTextStream in(&archivo);
    QString texto= in.readAll();
    ui->textCodigo->setText(texto);
    archivo.close();
}



void MainWindow::sel_metodo_clicked(){
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
          ImprimirArchivo("../AppMenu/insercion.cpp");


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
          ImprimirArchivo("../AppMenu/intercambio.cpp");

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
          ImprimirArchivo("../AppMenu/seleccion.cpp");

          break;
        }
      default:
        break;
    }

}


