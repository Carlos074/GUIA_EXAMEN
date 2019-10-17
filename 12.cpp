//Camacho Hernández Juan Carlos//
//12.- Escriba un programa que solicite un número N y luego lo muestre por pantalla la siguiente ejecución
//1
//1 2
//1 2 3
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>
int main(void)
{
  int a, b, c;
  char opcion;

  printf("Introduce un número: ");
  scanf("%d",&a);
  getchar();

  printf("\n");
  for(b=1;b<=a;b++)
  {
    for(c=1;c<=b;c++)
    {
      printf("%d ",c);
    }
    printf("\n");
  }

}
