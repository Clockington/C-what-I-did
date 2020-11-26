// Construir un Programa en C y un Diagrana de Flujo  que al recibir como dato el precio de un producto importado,
// incremente el 11% el mismo si es inferior a $1,500 y que a demás escriba el nuevo precio del producto.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float precio,p_final;
    printf("Ingrese el monto de la venta: ");
    scanf("%f",&precio);
    if (precio>=1500)
    {
        p_final=precio+(precio*0.11);
        printf("El precio final es de = $%.2f",p_final);
    }
    else
    {
        printf("El precio final es de = $%.2f",precio);
    }
    return 0;    
}