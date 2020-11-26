//Construir un Programa en C  y Diagrama de flujo que nos dé el sueldo de un trabajador,
//teniendo como datos de entrada las horas trabajadas y el pago por hora.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float horas,pago,nomina;
    printf("Ingrese horas trabajadas: ");
    scanf("%f",&horas);
    printf("Ingrese salario por hora: ");
    scanf("%f",&pago);
    nomina=horas*pago;
    printf("El monto a pagar es de: $%.2f",nomina);
    return 0;
}