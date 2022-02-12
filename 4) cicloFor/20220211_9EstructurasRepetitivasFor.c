#include<stdio.h>
#include<conio.h>
/*Confeccionar un programa que permita ingresar un valor del 1 al 10 y nos
muestre la tabla de multiplicar del mismo (los primeros 12 términos)*/

int main()
{
    int numero,resultado,f;

    printf("Ingresar un numero del 1 al 10: ");
    scanf("%i",&numero);
    for(f=1;f<=13;f++)
    {
        resultado=f*numero;
        printf("%i",resultado);
        printf("\n");
    }
    getch();
    return 0;
}
