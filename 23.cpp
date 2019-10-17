//Camacho Hernández Juan Carlos//
//23.-Escribir un  bucle que calcule la suma de cada tercer entero, comenzando por a=2 para todos los valores menores que 100//
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>
int main(void){
int cont,suma=0;
cont=2;
while(cont<=100){
    suma+=cont;
    cont=cont+3;
}
 printf("%d",suma);
}
