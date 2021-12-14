#ifndef QUICKSORT_H
#define QUICKSORT_H

#include <QVector>
#include <bits/stdc++.h>

using namespace std;

class QuickSort
{
public:

    void metodoQuickSort();
    void quicksort(QVector<int> &valores, int izquierda, int derecha) ;
    int particion(QVector<int> &valores, int izquierda, int derecha);

    void setTamanno(int n){
        this->tamanno=n;
    }

    int getTamanno(){
        return this->tamanno;
    }

    void setVector(QVector<int> v){
        this->v_datos=v;
    }

    QVector<int> getVector(){
        return this->v_datos;
    }

private:
    int tamanno;
    QVector<int> v_datos;
};

#endif // QUICKSORT_H
