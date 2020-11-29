//Elaborar un programa, que al recibir datos del radio y la altura de un cilindro calcule el area y su volumen.

#include <stdio.h>
#include <math.h>
#define PI 3.1415926

int main()
{
    float radio,altura,areab,areat,volumen;
    printf("Ingrese el radio de la base del cilindro:\n");
    scanf("%f",&radio);
    printf("Ingrese la altura de la base del cilindro:\n");
    scanf("%f",&altura);
    areab=(PI*pow(radio,2));
    volumen=(PI*pow(radio,2)*altura);
    areat=((PI*pow(radio,2))*2)+(altura*(PI*(radio*2)));
    printf("\nEl area de la base del cilindro es de: %5.2f",areab);
    printf("\nEl area total del cilindro es: %5.2f",areat);
    printf("\nEl volumen del cilindro es de: %5.2f",volumen);
    return 0;
}

