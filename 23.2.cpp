//Camacho Hernández Juan Carlos//
//23.-Escribir un  bucle que calcule la suma de cada tercer entero, comenzando por a=2 para todos los valores menores que 100//
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>
int main(void){
    int i,suma=0;
    for(i=2; i<=100; i=i+3){
        suma+=i;
    }
printf("%d",suma);
}
