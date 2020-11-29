//Una persona compro una estancia en un pais.
//La extension de la estancia es especificada en acres.
//Construye un programa y diagrama de flujo que, al recibir
//el dato de la extension en acres, calcule e imprima la
//extension de la misma en hectareas.

#include <stdio.h>
#include <stdlib.h>

void main()
{
    float hectareas,acres;
    printf("\nIngrese la cantidad de Acres: ");
    scanf("%f",&acres);
    hectareas=acres*0.404686;
    printf("\nLa estancia en Hectareas es de: %.4f",hectareas);
}