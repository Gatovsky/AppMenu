#include "insercion.h"


void Insercion::metodoInsercion(){
  int i,posicion,aux;

  for(i=0;i<5;i++){
          posicion = i;
          aux = vect[i];

	  while((posicion > 0) && (vect[posicion-1] > aux)){
		  vect[posicion]= vect[posicion - 1];
		  posicion--;
	  }
	  vect[posicion] =aux;
  }

}
