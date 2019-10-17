//Camacho Hernández Juan Carlos//
//24.- Escribir un programa que lea un valor a través del teclado, lo asigne a una variable indicador y escriba uno de los siguientes mensajes dependiendo de su valor:
 //Calor, si indicador tiene el valor de 1.
 //Templado, si indicador tiene el valor de 2.
 //Frio, si indicador tiene el valor 3.
 //Fuera de rango si indicador tiene el valor de 4.
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>
int main(void){
int opt;
printf("1.- Calor\n");
printf("2.- Templado\n");
printf("3.- Frio\n");
printf("4.- Fuera de rango\n");
printf("Elige una opcion");
scanf("%d",&opt);
if(opt==1){
printf("Calor");
}
if(opt==2){
printf("Templado");
}
if(opt==3){
    printf("Frio");
}
if(opt==4){
    printf("Fuera de rango");
}
}
