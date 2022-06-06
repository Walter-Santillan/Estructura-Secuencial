#include <stdio.h>

/*
11)Realizá un  programa  que  permita  al  usuario  ingresar  el  valor  unitario  de  cierto  artículo
y  la cantidad de artículos vendidos por un vendedor, del cual se sabe que gana un sueldo fijo de $14000
más  el  16%  del  monto  total  vendido.  Con  tales  datos,  la  computadora  debe  calcular el  monto
a cobrar por el vendedor y mostrarlo.
*/

typedef char cadena [50];
int leerEntero(cadena texto);
float leerFloat(cadena texto);
float sueldoTotal(int a, float b);

int main()
{
    int articulosTotales; // cantidad de artículos vendidos por un vendedor.
    float monto, valorUnitario;

    cadena precioArticulo = "Ingresar valor unitario del articulo: ";
    cadena cantArtVendidos = "Ingresar la cantidad de articulos vendidos: ";

    articulosTotales = leerEntero(precioArticulo);
    valorUnitario = leerFloat(cantArtVendidos);
    monto = sueldoTotal(articulosTotales, valorUnitario);

    printf("\nEl monto a cobrar por el vendedor es: %.2f\n", monto);

    return 0;
}

int leerEntero(cadena texto)
{
    int num;
    printf("%s ", texto);
    fflush(stdin);
    scanf("%d", & num);
    return num;
}

float leerFloat(cadena texto)
{
    float num;
    printf("%s ", texto);
    fflush(stdin);
    scanf("%f", & num);
    return num;
}

float sueldoTotal(int a, float b)
{
    return 14000 + (a * b * 0.16);
}
