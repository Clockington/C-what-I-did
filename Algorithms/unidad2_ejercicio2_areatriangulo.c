#include <stdio.h>

int main()
{
    float a, b, area;
    printf("\nIngrese base del triangulo:");
    scanf("%f", &b);
    printf("\nIngrese altura del triangulo:");
    scanf("%f", &a);
    area = (b * a) / 2;
    printf("\nEl area del triangulo es: %5.2f", area);
    return 0;
}