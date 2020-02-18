#include <stdio.h>
#include <stdlib.h>
int main(){
	float a,b,c;
	char opt;
	printf ("a.-Suma\nb.-Resta\nc.-Multiplicacion\nd.-Divicion\n");
	printf ("Seleccione la opccion: ");
	opt=getchar();
	printf ("Ingrese el primer operando: ");
	scanf ("%f",&a);
	printf ("Ingresa el segundo operando: ");
	scanf ("%f",&b);
	switch (opt){
		case 'A':
		case 'a':
		c=a+b;
		break;
		case 'B':
		case 'b':
		c=a-b;
		break;
		case 'C':
		case 'c':
		c=a*b;
		break;
		case 'D':
		case 'd':
		while (b==0){
			printf ("Error, b debe ser distinto de 0\n");
			printf ("Ingresa el segundo operando: ");
			scanf ("%f",&b);
			}
	c=a/b;
	break;
	default:
	printf ("Error, operacion invalida");
	opt=='R';
	}
	if (opt!='R'){
		printf ("El resultado es: %0.2f",c);
	}
}
