#ifndef SELECCION_H
#define SELECCION_H

#include<QVector>

class Seleccion
{
public:
  void metodoSeleccion();

  void metodoSeleccion(int n, QVector<int> v);

  QVector<int> getVector(){
    return int_vector;
  }

  void setVector(QVector<int> v){
    this->int_vector=v;
  }

  int getTam(){
    return Tam;
  }

  void setTam(int n){
    this->Tam=n;
  }


private:
  QVector<int> int_vector;
  int Tam;
};

#endif // SELECCION_H
