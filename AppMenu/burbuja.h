#ifndef BURBUJA_H
#define BURBUJA_H

#include <bits/stdc++.h>
#include <QVector>


class Burbuja
{
public:
   void metodoBurbuja();
   void metodoBurbuja(int n, QVector<int> v);

   QVector<int> burbujitaV2(QVector<int> v, const int lon);
   QVector<int> burbujitaV1(QVector<int> v, const int lon);

    void setVector(QVector<int> v){
        this->int_vector=v;
    }
    QVector<int> getVector(){
        return this->int_vector;
    }

    void setTam(int n){
        this->Tam=n;
    }

    int getTam(){
        return this->Tam;
    }

private:
    QVector<int> int_vector;
    int Tam;
};

#endif // BURBUJA_H
