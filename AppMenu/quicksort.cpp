#include "quicksort.h"


int QuickSort::particion(QVector<int> &valores, int izquierda, int derecha) {
    int indicePivo = izquierda + (derecha - izquierda) / 2;
    int valorPivo = valores[indicePivo];
    int i = izquierda, j = derecha;
    int tmp;
    while(i <= j) {
        while(valores[i] < valorPivo) {
            i++;
        }
        while(valores[j] > valorPivo) {
            j--;
        }
        if(i <= j) {
            tmp = valores[i];
            valores[i] = valores[j];
            valores[j] = tmp;
            i++;
            j--;
        }
    }
    return i;
}

void QuickSort::quicksort(QVector<int> &valores, int izquierda, int derecha) {
    if(izquierda < derecha) {
        int indicePivo = particion(valores, izquierda, derecha);
        quicksort(valores, izquierda, indicePivo - 1);
        quicksort(valores, indicePivo, derecha);
    }
}


void QuickSort::metodoQuickSort(){

    quicksort(v_datos, 0, tamanno-1);

    setVector(v_datos);


}
