#include<stdio.h>
#include<conio.h>
/*
Se debe desarrollar un programa que pida el ingreso del precio de un articulo
y la cantidad que lleva el cliente. Mostrar lo que debe abonar el comprador
*/
int main(){
    printf("######################################################\n");
    printf("\tDesarrollado por Walter Santillan\n");
    printf("######################################################\n");

    int cantidad;
    float precio, importe;

    /*INGRESO DE DATOS*/
    printf("\nIngrese el precio del articulo: ");
    scanf("%f", &precio);
    printf("Ingrese la cantidad del articulo a llevar: ");
    scanf("%i", &cantidad);

    /*OPERACION, CALCULO*/
    importe = precio * cantidad;

    /*IMPRIME LO QUE SE DEBE ABONAR POR CONSOLA*/
    printf("\nEl importe a abonar es: %.2f", importe);

    getch();
    return 0;
}
