#include "entradadatos.h"
#include "ui_entradadatos.h"

entradaDatos::entradaDatos(QWidget *parent) :
  QDialog(parent),
  ui(new Ui::entradaDatos){

  ui->setupUi(this);
}

entradaDatos::~entradaDatos(){
  delete ui;
}

void entradaDatos::on_pushButton_clicked(){

  setCantidad(ui->spinBoxCantidad->value());
  setDatos(ui->lineDatos->text());

  close();

}

