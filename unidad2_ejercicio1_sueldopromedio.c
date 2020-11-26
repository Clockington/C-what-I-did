#include<stdio.h>

int main()
{
	float a;
	float b;
	float c;
	float d;
	float e;
	float f;
	float promedio;
	printf("Ingrese los salarios a evaluar:\n");
	scanf("%f",&a);
	scanf("%f",&b);
	scanf("%f",&c);
	scanf("%f",&d);
	scanf("%f",&e);
	scanf("%f",&f);
	promedio = (a+b+c+d+e+f)/6;
	printf("El promedio es: $%f\n",promedio);
	return 0;
}