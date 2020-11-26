#include <stdio.h>
#include <stdlib.h>

int main()
{
    float precio,pago,cambio;
    printf("Ingrese el monto vendido: ");
    scanf("%f",&precio);
    printf("Ingrese el monto pagado: ");
    scanf("%f",&pago);
    cambio=pago-precio;
    printf("El cambio a regresar es de: $%.2f",cambio);
    return 0;
}