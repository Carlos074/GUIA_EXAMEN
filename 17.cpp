//Camacho Hernández Juan Carlos//
//17.- Escribe  un programa que solicite un número de segundo y muestre por pantalla dicha cantidad de tiempo en horas, minutos y segundos.//
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>
int main (void){
int a,d;
float b,c;
printf("Introduce una cantidad de segundos");
scanf("%d",&a);
b=a/3600;
c=a/60;
d=a;
printf("Horas %f\n",b);
printf("Minutos %f\n",c);
printf("Segundos %d",d);
}
