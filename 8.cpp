//Camacho Hernández Juan Carlos//
//8.- Escriba un programa que, dada una cierta cantidad de dinero, calcule el número de billetes o monedas.//
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>
int main(void){
int b=1000, c=500, d=200, e=100, f=50, g=20, h=10, i=5, j=2, k=1;
int b2,c2,d2,e2,f2,g2,h2,i2,j2,k2,l2;
float a,l=0.5,b3,c3,d3,e3,f3,g3,h3,i3,j3,k3;
printf("Introduce una cantidad");
scanf("%f",&a);
b2=a/b;
printf("Billetes de 1000:%d\n",b2);
b3=fmod(a,b);
c2=b3/c;
printf("Billetes de 500:%d\n",c2);
c3=fmod(b3,c);
d2=c3/d;
printf("Billetes de 200:%d\n",d2);
d3=fmod(c3,d);
e2=d3/e;
printf("Billetes de 100:%d\n",e2);
e3=fmod(d3,e);
f2=e3/f;
printf("Billetes de 50:%d\n",f2);
f3=fmod(e3,f);
g2=f3/g;
printf("Billetes de 20:%d\n",g2);
g3=fmod(f3,g);
h2=g3/h;
printf("Monedas de 10:%d\n",h2);
h3=fmod(g3,h);
i2=h3/i;
printf("Monedas de 5:%d\n",i2);
i3=fmod(h3,i);
j2=i3/j;
printf("Monedas de 2:%d\n",j2);
j3=fmod(i3,j);
k2=j3/k;
printf("Monedas de 1:%d\n",k2);
k3=fmod(j3,k);
l2=k3/l;
printf("Monedas de 0.5:%d\n",l2);
}
