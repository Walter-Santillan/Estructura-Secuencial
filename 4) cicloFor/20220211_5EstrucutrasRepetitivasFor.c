#include<stdio.h>
#include<conio.h>
/*Escribir un programa que lea n números enteros y calcule la cantidad de valores mayores o iguales a 1000.*/

int main()
{
    int n,valor,cantidad,numeros;
    cantidad=0;

    printf("Cuantos valores ingresara: ");
    scanf("%i",&n);

    for(numeros=1;numeros<=n;numeros++)
    {
        printf("Ingresar un valor: ");
        scanf("%i",&valor);
        if (valor>=1000)
        {
            cantidad++;
        }
    }
    printf("La cantidad de valores mayores o iguales a 1000 es: %i",cantidad);
    getch();
    return 0;
}
