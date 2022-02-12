#include<stdio.h>
#include<conio.h>
/*Desarrollar un programa que muestre la tabla de multiplicar del 5 (del 5 al 50)*/

int main()
{
    int f,tabla5;

    for(f=1;f<=10;f++)
    {
        tabla5=f*5;
        printf("%i",tabla5);
        printf("\n");
    }
    getch();
    return 0;
}
