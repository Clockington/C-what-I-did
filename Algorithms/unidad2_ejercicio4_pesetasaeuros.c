// Construir un Programa en C  y Diagrama de flujo para convertir de pesetas a euros.

#include <stdio.h>
#include <stdlib.h>

int main()

{
    float peseta,euro;
    printf("Ingrese monto en pesetas: ");
    scanf("%f",&peseta);
    euro=peseta*0.00601;
    printf("El importe en Euros es de: $%.4f",euro);
    return 0;
}