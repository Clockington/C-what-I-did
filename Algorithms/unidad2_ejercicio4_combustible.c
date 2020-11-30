//Una empresa que trabaja con vehículos desea calcular las
//necesidades de combustible (cantidad de combustible necesario
//para llenar los depósitos de todos sus vehículos) para lo
//cual nos han facilitado este esquema de cálculo.
//Se desea crear un programa para que puedan realizar el
//cálculo de forma automatizada.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int carro_a, carro_b;
    float dep_a, dep_b, total;

    printf("ingrese cantidad de vehiculos A: ");
    scanf("%i", &carro_a);
    printf("ingrese cantidad de depositos A: ");
    scanf("%f", &dep_a);
    printf("Ingrese cantidad de vehiculos B: ");
    scanf("%i", &carro_b);
    printf("Ingrese cantidad de depositos B: ");
    scanf("%f", &dep_b);

    total = (carro_a * dep_a) + (carro_b * dep_b);

    printf("El combustible necesario es %.2f litros", total);

    return 0;
}