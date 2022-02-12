#include<stdio.h>
#include<conio.h>
/*Realizar un programa que imprima en pantalla los números del 1 al 100.*/

int main(){
    int num;

    for (num = 1; num <= 100; num ++)
    {
        printf("%i", num);
        printf("\n");
    }
    getch();
    return 0;
}
