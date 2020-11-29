//Una de venta de recambios de automoviles necesita un programa que calcule y muestre el precio final en euros de un producto y debemos aplicar la siguiente formula
// Precio neto = (Precio costo * ( 100 + margen)) / 100)
//El precio de coste en euros y el margen en tanto por ciento que se desea obtener para el producto que se introducira por el teclado

#include <stdio.h>
#include <stdlib.h>

void main()

{
    float neto,euros,venta,margen;
    printf("\nIngrese importe de venta: ");
    scanf("%f",&venta);
    printf("\nIngrese margen: ");
    scanf("%f",&margen);
    euros=venta*0.04;
    neto=(euros*100)+(margen/100);
    printf("\nLa venta total es de $ %.4f con un margen de %.4f ",neto,margen);
}