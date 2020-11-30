//Construir Programa en C y Diagrama de flujo para calcular
//el perimetro de una circuferencia.

#include <stdio.h>
#include <math.h>
#define PI 3.1415926

int main()
{
    float radio, perimetro;
    printf("Ingrese el valor del radio dle circulo: ");
    scanf("%f", &radio);
    perimetro = PI * (radio * 2);
    printf("El perimetro del circulo es: %.4f", perimetro);
}