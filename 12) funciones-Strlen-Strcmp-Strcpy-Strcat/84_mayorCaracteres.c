#include <stdio.h>
#include <conio.h>
#include <string.h>

/*
Ingresar por teclado dos nombres de personas y luego mostrarlas primero el que tiene
más caracteres y luego el que tiene menos.
*/

int main() {
    char nombre_1[50];
    char nombre_2[50];

    printf("*************************************************\n");
    printf("\t<< PROGRAMA QUE MUESTRA\n \tCUAL CADENA TIENE MAS CARACTERES. >>\n");
    printf("*************************************************\n");

    printf("\nIngresar el primer nombre: ");
    gets(nombre_1);
    printf("Ingresar el segundo nombre: ");
    gets(nombre_2);

    // PARA MOSTRAR LA CADENA QUE TIENE MAYOR CANTIDAD DE CARACTÉRES UTILIZAR LA FUNCIÓN "strlen".
    if (strlen(nombre_1) > strlen(nombre_2)) {
        printf("\n%s\n%s\n", nombre_1, nombre_2);
    } else
    {
        printf("\n%s\n%s\n", nombre_2, nombre_1);
    }

    printf("\n*****************************************************\n");
    printf("<< PROGRAMA DESARROLLADO POR WALTER SANTILLAN >>");
    printf("\n*****************************************************\n");

    getch();
    return 0;
}
