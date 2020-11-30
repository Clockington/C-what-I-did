#include <stdio.h>

int main()
{
	float a, b, c, d, e, f, pr;
	printf("Ingrese los salarios a evaluar:\n");
	scanf("%f", &a);
	scanf("%f", &b);
	scanf("%f", &c);
	scanf("%f", &d);
	scanf("%f", &e);
	scanf("%f", &f);
	pr = (a + b + c + d + e + f) / 6;
	printf("El promedio es: $%f\n", pr);
	return 0;
}