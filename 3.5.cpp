//Camacho Hernández Juan Carlos//
//3.-Dadas z, y, z, tres variables de tipo int con los valores 2, 80 y 3 respectivamente
//Calcule el valor de la siguiente expresion (x<z)^(x==2)||(z>0)
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
int main (void){
 int x=2;
 int y=80;
 int z=3;
if((x<z)^(x==2)||(z>0)){
    printf("Verdadero");
}
else {
    printf("Falso");
}
}
