//Camacho Hernández Juan Carlos//
//10.-una compañia esta implantado un nuevo sitema de cobro. Para cada casa realiza la siguiente factura://
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>
int main(void){
    float a, d;
    int b=10, c=20;
printf("Litros consumidos");
scanf("%f",&a);
if(a<20){
    printf("Pagar:200");
    d=a*c;
    printf("Pagar: %f",d);

}
if(a<199){
    d=a*b;
    printf("Pagar:%f\n",d);

}
if(a>200){
    d=a*c;
    printf("Pagar: %f",d);
}
}

