#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

/*Calcular el perimetro de un cuadrado*/

int main(){
    printf("######################################################\n");
    printf("\tDesarrollado por Walter Santillan\n");
    printf("######################################################\n");

    int lado, perimetro;

    printf("Ingresar el lado de un cuadrado: ");
    scanf("%i", &lado);

    perimetro = lado * 4;

    printf("\nEl perimetro del cuadrado es: %i", perimetro);

    getch();
    return 0;
}
