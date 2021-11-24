#ifndef INTERCAMBIO_H
#define INTERCAMBIO_H

#include<QVector>

class Intercambio
{
public:
  void metodoIntercambio();
  QVector<int> getVector(){
    return numeros;
  }

private:
  QVector<int> numeros={9,3,5,1};
};

#endif // INTERCAMBIO_H
