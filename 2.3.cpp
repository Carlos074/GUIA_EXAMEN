//Camacho Hernández Juan Carlos//
//2.- Sean n y m dos variable de tipo int con los valores 2 y 5 respectivamente.//
//Calcule el valor de las siguiente expresion (m%n)>5//
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main(void){
    int n= 2;
    int m= 5;
    int z;
if((m%n)>5){
    printf("Verdadero");
      z= m%n;
   printf("El resultado es %d",z);
}
else{
    printf("Falso\n");
     z= m%n;
   printf("El resultado es %d",z);
}
}
