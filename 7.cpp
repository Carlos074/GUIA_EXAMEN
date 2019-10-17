//Camacho Hernández Juan Carlos//
//7.- Redacte un programa que solicite del usuaruio tres numero e indique cuál es el mayor//
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>
int main(void){
float a;
float b;
float c;
printf("Introduce la primer cantidad");
scanf("%f",&a);
printf("Introduce la segunda cantidad");
scanf("%f",&b);
printf("Introduce la tercera cantidad");
scanf("%f",&c);
if(a>b){
    (a>c);
    printf("%f",a);
}

if(b>a){
    (b>c);
    printf("%f",b);

}
if (c>b){
    (c>a);
    printf("%f",c);
}
}

