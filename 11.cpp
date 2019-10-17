//Camacho Hernández Juan Carlos//
//11.- Redacte un programa que calcule el minimo y el maximo de una lista de numeros entero, introducida por el usuario(10 numeros)
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>
int main(void){

int vector[10];
int a,b, c;
float d;
for (a=0; a<10; a++){
   printf( "ingrese 10 numeros enteros. Numero %d\n", a+1);
   scanf("%d", &vector[a]);
}


b = vector[0];
c = vector[0];

for (a=0; a<10; a++){
    if (vector[a]> b){
    b=vector[a];
    }
    if (vector[a]< c){
    c=vector[a];
    }

}
printf("El mayor es %d\n", b);
 printf("El menor es %d\n", c);
}
