//Camacho Hernández Juan Carlos//
//13.- Realice un progrma que muestre por pantalla si un número introducido por el usuario es primo o no
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>
int main(void){
int a;
int b=2;
printf("Introduce un numero");
scanf("%d", &a);
if(a%b==0){
    printf("No es primo\n");
}

    else{
        printf("Primo");
}
}
