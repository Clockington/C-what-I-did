#include<stdio.h>

int main()

{
    float b;
    float a;
    float area;
    printf("Ingrese base del triangulo:\n");
    scanf("%f", &b);
    printf("Ingrese altura del triangulo:\n");
    scanf("%f", &a);
    area = (b*a)/2;
    printf("El area del triangulo es: %5.2f\n",area);
    return 0;
}