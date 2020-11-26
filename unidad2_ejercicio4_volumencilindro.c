//Construir un Programa en C y Diagrama para cálcular el
//volumen de un cilindro dados su altura y diámetro.

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define PI 3.1415926

int main ()
{
    float diametro,altura,volumen;
    printf("Ingrese la altura del cilindro: ");
    scanf("%f",&altura);
    printf("Ingrese el diametro del cilindro: ");
    scanf("%f",&diametro);
    volumen=(PI*(pow(diametro/2,2)))*altura;
    printf("El volumen del cilindro es: %f",volumen);
    return 0;
}