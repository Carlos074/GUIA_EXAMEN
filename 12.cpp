//Camacho Hern�ndez Juan Carlos//
//12.- Escriba un programa que solicite un n�mero N y luego lo muestre por pantalla la siguiente ejecuci�n
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

  printf("Introduce un n�mero: ");
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
