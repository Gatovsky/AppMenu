#include "intercambio.h"

void Intercambio::metodoIntercambio(){
  int Tam = 4;
  int temporal;

  for(int indice1=0; indice1 < (Tam-1); indice1++){
      for(int indice2=indice1+1; indice2 < Tam; indice2++){
          if(numeros[indice1] > numeros[indice2]){
              temporal = numeros[indice1];
              numeros[indice1]=numeros[indice2];
              numeros[indice2] = temporal;
            }
        }
    }

}
