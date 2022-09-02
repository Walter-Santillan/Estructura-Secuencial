#include <stdio.h>
#include <conio.h>
#include <string.h>

/*
Ingresar por teclado dos nombres de personas y luego mostrarlas ordenados alfabéticamente.
*/

int main() {
    char nombre_1[50];
    char nombre_2[50];

    printf("*************************************************\n");
    printf("\t<< PROGRAMA ORDENA CADENAS >>\n");
    printf("*************************************************\n");

    printf("\nIngresar el primer nombre: ");
    gets(nombre_1);
    printf("Ingresar el segundo nombre: ");
    gets(nombre_2);

    // PARA ORDENAR CADENAS ALFABÉTICAMENTE UTILIZAR LA FUNCIÓN "strcmp".
    if (strcmp(nombre_1, nombre_2) < 0) {
        printf("\n%s - %s\n", nombre_1, nombre_2);
    } else
    {
        printf("\n%s - %s\n", nombre_2, nombre_1);
    }

    printf("\n*****************************************************\n");
    printf("<< PROGRAMA DESARROLLADO POR WALTER SANTILLAN >>");
    printf("\n*****************************************************\n");
    getch();
    return 0;
}
