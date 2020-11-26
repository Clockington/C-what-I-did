//Construir un Programa en C  y Diagrama de flujo el volumen del cubo.

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float arista, volumen;
    printf("Ingrese el valor de la arista del cubo: ");
    scanf("%f",&arista);
    volumen=pow(arista,3);
    printf("El volumen del cubo es de: %.4f",volumen);
    return 0;
}