//Camacho Hernández Juan Carlos//
//6.-Escriba un programa que lea un número y determine si par o impar//
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>
int main(void){
int a;
int b=2;
printf("Introduce un numero");
scanf("%d",&a);
if(a%b==0){
    printf("Par");
}
else{
 printf("Impar");
}
}
