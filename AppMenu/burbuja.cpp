#include "burbuja.h"

using namespace std;

QVector<int> Burbuja::burbujitaV2(QVector<int> v, const int lon){
    int aux=0;
    for(int i=lon-1; i>0; i--){
        for(int j=0; j<i; j++){
            if(v[j] < v[j+1]){
                aux= v[j];
                v[j]= v[j+1];
                v[j+1]= aux;
            }
        }
    }
    return v;
}

QVector<int> Burbuja::burbujitaV1(QVector<int> v, const int lon){
    int aux=0;
    for(int i=lon-1; i>0; i--){
        for(int j=0; j<i; j++){
            if(v[j] > v[j+1]){
                aux= v[j];
                v[j]= v[j+1];
                v[j+1]= aux;
            }
        }
    }
    return v;
}

void Burbuja::metodoBurbuja(){

    setVector(burbujitaV1(int_vector, Tam));

}

