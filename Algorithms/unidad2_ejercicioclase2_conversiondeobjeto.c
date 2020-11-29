// Elaborar un programa que al recibir unos datos
//la longitud y el peso de un objeto expresados en pies y libras
// calcular los datos de este objeto pero en metros y kilogramos
// respectivamente.

#include <stdio.h>
#include <stdlib.h>

int main()

{
    float long_1,long_2,peso_1,peso_2;
    printf("Ingrese la longitud del objeto en pies: ");
    scanf("%f",&long_1);
    printf("Ingrese la peso del objeto en libras: ");
    scanf("%f",&peso_1);
    long_2=long_1*0.3048;
    peso_2=peso_1*0.453592;
    printf("\nLa longitud del objeto en metros es de: %f",long_2);
    printf("\nEl peso del objeto en Kilogramos es: %f",peso_2);
    return 0;
}