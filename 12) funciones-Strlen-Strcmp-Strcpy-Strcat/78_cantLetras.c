#include <stdio.h>
#include <string.h>
#include <conio.h>

/*
Ingresar por teclado una palabra. Mostrar luego por pantalla
la cantidad de letras que tiene.
*/

int main() {
    char palabra[50];

    printf("\nIngresar una palabra: ");
    gets(palabra);

    int cant = strlen(palabra);

    printf("\nLa palabra %s tiene %d caracteres.\n", palabra, cant);

    getch();
    return 0;
}
