//Camacho Hernández Juan Carlos//
//14.- Escriba un programa que solicite al usuario una letra e indique si es una vocal o consonante
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>
int main (void){
char letra;
printf("Introduce una letra");
scanf("%c",&letra);
if(letra=='a'||letra=='e'||letra=='i'||letra=='o'||letra=='u'||letra=='A'||letra=='E'||letra=='I'||letra=='O'||letra=='U'){
 printf("Es Vocal");
}
else{
      printf("No es Vocal");
}
}
