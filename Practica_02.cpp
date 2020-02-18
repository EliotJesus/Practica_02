#include<stdio.h>
#include<stdlib.h>
int main (){
float a,b,c;
int opt;
printf ("1.-Suma\n2.-Resta\n3.-Multiplicacion\n4.-Divicion");
printf ("Selacciona la opcion: ");
scanf ("%d",&opt);
printf ("Ingrese el primer operando: ");
scanf ("%f",&a);
printf ("Ingrese el segundo operando: ");
scanf ("%f",&b);
switch (opt){
case 1:
    c=a+b;
    break;
case 2:
    c=a-b;
    break;
case 3:
    c=a*b;
    break;
case 4:
    while (b==0){
        printf ("Error, b debe ser distinto de 0\n");
        printf ("Introduce el segundo operando: ");
        scanf ("%f",&b);
       }
    c=a/b;

default:;
  }
  printf ("el resultado es %f",c);
}
