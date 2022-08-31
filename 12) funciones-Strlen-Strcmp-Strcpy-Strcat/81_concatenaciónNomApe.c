#include <stdio.h>
#include <conio.h>
#include <string.h>

/*
Cargar por teclado en dos variables de tipo string el nombre y el apellido
de una persona. Definir un tercer string y guardar la concatenación del nombre y apellido.
*/

int main() {
    char nombre[30];
    char apellido[30];
    char nomApe[60]; // VARIABLE DONDE SE ALMACENA EL NOMBRE Y APELLIDO.

    printf("*****************************************************\n");
    printf("\t<< PROGRAMA QUE CONCATENA CADENAS >>");
    printf("\n*****************************************************\n");

    printf("\nIngresar el nombre: ");
    gets(nombre);
    printf("Ingresar el apellido: ");
    gets(apellido);

    // UTILIZAR LA FUNCIÓN PARA COPIAR EL CONTENIDO DE "nombre" A nomApe.
    strcpy(nomApe, nombre);
    // CON STRCAT SE CONCATENA EL ESPACIO ENTRE DOS CADENAS.
    strcat(nomApe, " ");
    // CONCATENA EL APELLIDO INGRESADO A "nomApe".
    strcat(nomApe, apellido);

    printf("\n%s", nomApe);
    printf("\n");

    printf("\n*****************************************************\n");
    printf("<< PROGRAMA DESARROLLADO POR WALTER SANTILLAN >>.");
    printf("\n*****************************************************\n");

    getch();
    return 0;
}
