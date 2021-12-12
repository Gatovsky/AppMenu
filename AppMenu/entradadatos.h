#ifndef ENTRADADATOS_H
#define ENTRADADATOS_H

#include <QDialog>

namespace Ui {
  class entradaDatos;
}

class entradaDatos : public QDialog
{
  Q_OBJECT

public:
  explicit entradaDatos(QWidget *parent = nullptr);
  ~entradaDatos();

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
  //void on_pushButton_clicked();
  void enviar_pushButton_clicked();

private:
  Ui::entradaDatos *ui;
  int cantidad;
  QString str_datos;
};

#endif // ENTRADADATOS_H
