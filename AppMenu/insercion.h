#ifndef INSERCION_H
#define INSERCION_H
#include <QVector>


class Insercion{
public:
  void metodoInsercion();
  QVector<int> getVector(){
    return vect;
  }

private:
  QVector<int> vect={15, 12, 14, 13, 11};

};

#endif // INSERCION_H
