//Construir un Programa en C  y Diagrama de flujo para convertir  segundo de una hora

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float segundos,horas;
    printf("Ingrese las horas a convertir: ");
    scanf("%f",&horas);
    segundos=horas*3600;
    printf("El valor en segundos es de: %.3f hrs",segundos);
    return 0;
}