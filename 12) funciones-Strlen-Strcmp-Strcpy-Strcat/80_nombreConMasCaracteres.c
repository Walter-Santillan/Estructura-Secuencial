#include <stdio.h>
#include <conio.h>
#include <string.h>

/*
Cargar por teclado dos nombres de personas que tengan distinta cantidad de caracteres.
Almacenar en un tercer vector de caracteres el nombre que tenga más caracteres.
Luego imprimir dicho vector.
*/

int main() {
    char nombre_1[30];
    char nombre_2[30];
    char nombreLargo[30];

    printf("*****************************************************\n");
    printf("\t<< PROGRAMA QUE COPIA CADENAS >>");
    printf("\n*****************************************************\n");

    printf("\nIngresar el primer nombre: ");
    gets(nombre_1);
    printf("Ingresar el segundo nombre: ");
    gets(nombre_2);

    // PRIMERO: COMPARAR LAS CADENAS CON STRLEN PARA SABER CUÁL TIENE MAS CARACTERES.
    if (strlen(nombre_1) > strlen(nombre_2)) {
        // CON LA FUNCIÓN strcpy COPIAMOS EL CONTENIDO DE nombre_1 A nombreLargo.
        strcpy(nombreLargo, nombre_1);
    } else
    {
        strcpy(nombreLargo, nombre_2);
    }

    printf("\nEl nombre %s tiene mas caracteres.\n", nombreLargo);

    printf("\n*****************************************************\n");
    printf("<< PROGRAMA DESARROLLADO POR WALTER SANTILLAN >>.");
    printf("\n*****************************************************\n");
    getch();
    return 0;
}
