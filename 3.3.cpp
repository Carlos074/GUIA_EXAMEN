//Camacho Hernández Juan Carlos//
//3.-Dadas z, y, z, tres variables de tipo int con los valores 2, 80 y 3 respectivamente
//Calcule el valor de la siguiente expresion (x>y)||(z<2*x)
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
int main (void){
int x=2;
int y=80;
int z=3;
if ((x>y)||(z<2*x)){
    printf("Verdadero");
}
else {
    printf("Falso");
}
}
