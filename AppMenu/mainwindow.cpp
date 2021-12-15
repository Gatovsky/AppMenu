#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "quicksort.h"
#include "insercion.h"
#include "intercambio.h"
#include "seleccion.h"
#include "burbuja.h"


using namespace std;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->botonEntrada,SIGNAL(clicked()), this, SLOT(sel_metodo_clicked()));
    connect(ui->actionCerrar, SIGNAL(triggered()), this, SLOT(close()));
    connect(ui->actionAcerca_de_Qt, SIGNAL(triggered()), this, SLOT(action_acercaqt()));
    connect(ui->actionAcerca, SIGNAL(triggered()), this, SLOT(action_acercade()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::action_acercaqt(){
    QMessageBox::aboutQt(this, "Qt");
}

void MainWindow::action_acercade(){
    QString texto = "Autor: Cloudiness México Corp.\n\n";
    texto +="Fecha: 2021/12/12\n\n";
    texto +="Software: AppMenu\n\n";
    texto +="Versión: 0.90\n\n";
    texto +="Licencia: GNU General Public License v3.0\n\n";
    texto += "Este programa es software libre y se distribuye bajo la Licencia Pública General GNU v3."
             "En resumen, esto significa que usted es libre de usar y distribuir AppMenu para cualquier propósito,"
             "comercial o no comercial, sin restricciones. modifique el programa como desee, "
             "con la única restricción de que si distribuye la versión modificada, "
             "debe proporcionar acceso a su código fuente."
             ""
             "Este programa se distribuye con la esperanza de que sea útil didacticamente, "
             "pero SIN NINGUNA GARANTÍA.";

    QMessageBox::about(this, "AppMenu", texto);
}

void MainWindow::ImprimirValores(QString str1, QString str2, QString str3){
  ui->salidaResultado->setText("***Método de "+ str3+"***\n\n"+
                               "Array desordenado: "+ str1+ "\n"+
                               "Array ordenado: "+ str2);
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

void MainWindow::ContarLineas(QString lineas){
    int c=0;
    string linea;

    istringstream is(lineas.toStdString());
    while (getline(is,linea)) {
        if(!linea.empty()) c++;

    }

    QString str_l = "           Líneas de código del método: "+ QString::number(c);
    ui->statusbar->showMessage(str_l);
}


QString MainWindow::AbrirArchivo(QString str){
    QFile archivo;
    archivo.setFileName(str);
    if(!archivo.exists()){
        QMessageBox::critical(this, "@Error", "No existe archivo que visualizar");
        return "";
    }
    archivo.open(QIODevice::ReadOnly | QIODevice::Text);
    if(!archivo.isOpen()){
        QMessageBox::critical(this, "@Error", archivo.errorString());
        return "";
    }
    QTextStream in(&archivo);
    QString texto= in.readAll();

    archivo.close();
    return texto;

}

void MainWindow::ImprimirArchivo(QString str){

    ui->textCodigo->setText(str);

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
          ImprimirArchivo(AbrirArchivo("../metodos/insercion.html"));
          ContarLineas(AbrirArchivo("../AppMenu/insercion.cpp"));


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
          ImprimirArchivo(AbrirArchivo("../metodos/intercambio.html"));
          ContarLineas(AbrirArchivo("../AppMenu/intercambio.cpp"));

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
          ImprimirArchivo(AbrirArchivo("../metodos/seleccion.html"));
          ContarLineas(AbrirArchivo("../AppMenu/seleccion.cpp"));

          break;

    }
    case '4':{
        QString str_v_ordenado; QVector<int> v_ordenado;

        IngresarDatos();

        QVector<int> v_datos = QString2QVector(str_datos, cantidad);

        Burbuja burbuja{};
        burbuja.setTam(cantidad);
        burbuja.setVector(v_datos);

        burbuja.metodoBurbuja();
        v_ordenado= burbuja.getVector();

        str_v_ordenado = QVector2Qstring(v_ordenado);

        ImprimirValores(str_datos, str_v_ordenado, "Burbuja");
        ImprimirArchivo(AbrirArchivo("../metodos/burbuja.html"));
        ContarLineas(AbrirArchivo("../AppMenu/burbuja.cpp"));

        break;

    }
    case '5':{
        QString str_v_ordenado; QVector<int> v_ordenado;

        IngresarDatos();

        QVector<int> v_datos = QString2QVector(str_datos, cantidad);

        QuickSort quick{};

        quick.setTamanno(cantidad);
        quick.setVector(v_datos);

        quick.metodoQuickSort();
        v_ordenado = quick.getVector();

        str_v_ordenado = QVector2Qstring(v_ordenado);

        ImprimirValores(str_datos, str_v_ordenado, "Quick Sort");
        ImprimirArchivo(AbrirArchivo("../metodos/quicksort.html"));
        ContarLineas(AbrirArchivo("../AppMenu/quicksort.cpp"));


        break;
    }
      default:
        break;
    }

}


