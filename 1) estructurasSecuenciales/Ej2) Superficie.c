#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
/*
Hallar la superficie de un cuadrado conociendo el valor de un lado
*/
int main(){
    printf("######################################################\n");
    printf("\tDesarrollado por Walter Santillan\n");
    printf("######################################################\n");

    int lado;
    int superficie;

    printf("\nIngrese el valor del lado del cuadrado: ");
    scanf("%i", &lado);

    superficie = lado * lado;

    printf("\nLa superficie del cuadrado es: ");
    printf("%i", superficie);

    getch();
    return 0;
}
