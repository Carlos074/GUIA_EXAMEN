//Camacho Hernández Juan Carlos//
//4.- Escriba un programa que lea la altura en metros de una persona y su edad,//
//una vez conociendo estos datos obtenga el peso recomendado, de acuerdo a://
// Peso recomendado = (altura en cm - 100 + diez porciendo de la edad) x 0.9//
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
int main (void){
 float a;
 int b;
 float c;
 float d;
 float e;
 printf("Introduce la altura en metros");
 scanf("%f",&a);
 printf("Introduce la edad");
 scanf("%d",&b);
  c=a*100;
  d=b*0.1;
  e=(c-100+d)*0.9;
  printf("Peso recomendado: %f",e);
}
