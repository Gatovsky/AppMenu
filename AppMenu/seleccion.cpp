#include "seleccion.h"


void Seleccion::metodoSeleccion(){
  int i, j, temp, small, chk, index;

      for(i=0; i<(Tam-1); i++)
      {
          chk=0;
          small = int_vector[i];
          for(j=(i+1); j<Tam; j++)
          {
              if(small>int_vector[j])
              {
                  small = int_vector[j];
                  chk++;
                  index = j;
              }
          }
          if(chk!=0)
          {
              temp = int_vector[i];
              int_vector[i] = small;
              int_vector[index] = temp;
          }
      }
}
