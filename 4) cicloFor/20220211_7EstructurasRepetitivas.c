#include<stdio.h>
#include<conio.h>
/*Desarrollar un programa que solicite la carga de 10 números e imprima la suma de los últimos 5 valores ingresados*/

int main()
{
    int num,suma,f;
    suma=0;

    for (f=1;f<=10;f++)
    {
        printf("Ingresar un numero: ");
        scanf("%i",&num);
        if (f>5)
        {
            suma=suma+num;
        }
    }
    printf("La suma de los ultimos cinco valores es: %i",suma);
    getch();
    return 0;
}
