//Camacho Hernández Juan Carlos//
//_5.-Escribe un programa que lea el radio de un circulo e imprima su circunferencia//
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>
int main(void){
float a;
float b=3.1416;
float c;
float d;
printf("Introduce el radio del circulo");
scanf("%f",&a);
c=b*pow(a,2);
d=b*a*2;
printf("El radio es: %f\n",c);
printf("El diametro es:%f",d);
}
