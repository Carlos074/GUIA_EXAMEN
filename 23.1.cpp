//Camacho Hernández Juan Carlos//
//23.-Escribir un  bucle que calcule la suma de cada tercer entero, comenzando por a=2 para todos los valores menores que 100//
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>
int main(void){
int i,suma=0;
i=2;
do{

    suma+=i;
     i=i+3;

}while(i<=100);
printf("%d",suma);
}

