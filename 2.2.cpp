//Camacho Hernández Juan Carlos//
//2.- Sean n y m dos variable de tipo int con los valores 2 y 5 respectivamente.//
//Calcule el valor de las siguiente expresion (n>m) = !(m==5)//
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main(void){
    int n= 2;
    int m= 5;
if((n>m)==!(m==5)){
    printf("Verdadero");
}
else{
    printf("Falso");
}
}
