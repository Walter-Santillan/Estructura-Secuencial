#include<stdio.h>
#include<conio.h>
/*Realizar un programa que imprima 25 términos de la serie 11 - 22 - 33 - 44, etc. (No se ingresan valores por teclado)*/

int main(){
    int x, serie;

    x = 1;
    serie = 11;

    printf("#######################################################\n");
    printf("\tDesarrollado por Walter Santillan\n");
    printf("#######################################################\n");

    while(x <= 25){ //imprime hast los 25 terminos.
        printf("%i",serie);
        printf("\n");
        serie = serie + 11;
        x = x + 1;
    }
    getch();
    return 0;
}
