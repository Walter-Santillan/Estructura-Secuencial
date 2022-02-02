#include<stdio.h>
#include<conio.h>

/*Escribir un programa que solicite ingresar 10 notas de alumnos y nos informe cuántos tienen notas mayores
o iguales a 7 y cuántos menores. */

int main(){
    int x,notas,altas,bajas;

    x = 1;
    altas = 0;
    bajas = 0;

    printf("#######################################################\n");
    printf("\tDesarrollado por Walter Santillan\n");
    printf("#######################################################\n");

    while(x <= 10){
        printf("\nIngresar notas de los alumnos: ");
        scanf("%i",&notas);

        if (notas >= 7){
            altas = altas + 1;
        }else{
            bajas = bajas + 1;
        }
        x = x + 1;
    }
    printf("\nLa cantidad de alumnos con notas mayores o iguales a 7 son: %i",altas);
    printf("\n");
    printf("\nLa cantidad de alumnos con notas menores a 7 son: %i",bajas);

    getch();
    return 0;
}
