#include "entradadatos.h"
#include "ui_entradadatos.h"

entradaDatos::entradaDatos(QWidget *parent) :
  QDialog(parent),
  ui(new Ui::entradaDatos){

  ui->setupUi(this);
  connect(ui->pushButton, SIGNAL(clicked()), this, SLOT(enviar_pushButton_clicked()));
}

entradaDatos::~entradaDatos(){
  delete ui;
}


void entradaDatos::enviar_pushButton_clicked(){
    setCantidad(ui->spinBoxCantidad->value());
    setDatos(ui->lineDatos->text());
    this->close();
}

