#include<stdio.h>
#include<conio.h>
/*Escribir un programa que lea 10 n�meros enteros y luego muestre
cu�ntos valores ingresados fueron m�ltiplos de 3 y cu�ntos de 5*/

int main()
{
    int valor,multiplo3,multiplo5,numeros;
    multiplo3=0;
    multiplo5=0;

    for(numeros=1;numeros<=10;numeros++)
    {
        printf("Ingresar un valor: ");
        scanf("%i",&valor);

        if (valor%3==0)
        {
            multiplo3=multiplo3+1;
        }
        if (valor%5==0)
        {
            multiplo5=multiplo5+1;
        }
        }
        printf("La cantidad de numeros ingresados multiplos de 3 es: %i",multiplo3);
        printf("\n");
        printf("La cantidad de numeros ingresados multiplos de 5 es: %i",multiplo5);

        getch();
        return 0;
}
