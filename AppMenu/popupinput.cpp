#include "popupinput.h"
#include "ui_popupinput.h"

PopUpInput::PopUpInput(QWidget *parent) :
  QDialog(parent),
  ui(new Ui::PopUpInput)
{
  ui->setupUi(this);
}

PopUpInput::~PopUpInput()
{
  delete ui;
}

void PopUpInput::on_pushButton_aceptar_clicked()
{
  //QVector<int> v_datos;
  int cantidad = ui->spinBox_cantidad->value();
  QString str_datos = ui->lineEdit_datos->text();

  for(int i=0; i<cantidad; i++){
      //int num= str_datos.split(" ")[i].toInt();
      v_datos.push_back(str_datos.split(" ")[i].toInt());
    }



}

