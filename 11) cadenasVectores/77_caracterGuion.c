#include <stdio.h>

/*
Permitir el ingreso de una palabra en minúsculas por teclado.
Cambiar todas las vocales por un caracter de guión: '-'
*/

int main() {
    printf("********************************************************\n");
    printf("\t<< PROGRAMA CAMBIAR VOCALES POR GUION >>");
    printf("\n********************************************************\n");

    char palabraMin[50];
    printf("Ingresar una palabra en minuscula: ");
    gets(palabraMin);
    int x = 0;

    // CON EL BUCLE WHILE SE ANALIZA CADA CARACTER SI COINCIDE CON LAS VOCALES.
    while (palabraMin[x] != '\0') {
        if (palabraMin[x] == 'a' || palabraMin[x] == 'e' || palabraMin[x] == 'i' || palabraMin[x] == 'o' || palabraMin[x] == 'u') {
            palabraMin[x] = '-'; // ASIGNAR GUION AL ELEMENTO
        }
        x ++;
    }
    printf("\nLa palabra modificada es: %s\n", palabraMin);

    printf("\n********************************************************\n");
    printf("<< DESARROLLADO POR WALTER SANTILLAN >>");
    printf("\n********************************************************\n");

    getch();
    return 0;
}
