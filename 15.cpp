//Camacho Hernández Juan Carlos//
//15.- Escriba un programa que calcule la siguiente expresion matematica//
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>
int main(void){
int a,b=1,c,d;
printf("Introduce el numero de veces que se realizara la suma");
scanf("%d",&a);
c=pow(b,2)+1/b;
d=c*a;
printf("%d",d);
}
