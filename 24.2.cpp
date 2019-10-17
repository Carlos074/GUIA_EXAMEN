//Camacho Hernández Juan Carlos//
//24.- Escribir un programa que lea un valor a través del teclado, lo asigne a una variable color y escriba uno de los siguientes mensajes dependiendo de su valor:
//• ROJO, si color tiene el valor de r o R.
//• VERDE, si color tiene el valor de v o V.
//• AZUL, si color tiene el valor de a o A.
//• NEGRO si color tiene asigando cualquier otro caracter.

#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
int main(void) {
char otro;
char color;

printf("Ingresa letra del indicador \n");
scanf("%c", &color);

if ((color=='r'||color=='R')){
    printf("ROJO \n");
}
else { if ((color=='v'||color=='V')) {
        printf("VERDE \n");
}
else {if ((color=='a'||color=='A')) {
        printf("AZUL \n");
}
else {
    printf("negro \n");

}
}
}


}
