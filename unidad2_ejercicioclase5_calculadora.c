#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, suma, resta, multi;
    float division;
    printf("Ingrese el primer valor: ");
    scanf("%i", &a);
    printf("Ingrese el segundo valor: ");
    scanf("%i", &b);
    suma = a + b;
    resta = a - b;
    multi = a * b;
    division = a / b;
    printf("Los resultados son los siguientes: \nSuma: %i\nResta: %i\nMultiplicacion: %i\nDivision: %.4f", suma, resta, multi, division);
    return 0;
}

