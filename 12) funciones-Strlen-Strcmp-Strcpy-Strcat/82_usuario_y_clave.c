#include <stdio.h>
#include <conio.h>
#include <string.h>

/*
Confeccionar un programa que pida ingresar el nombre de usuario y clave en dos
string. Mostrar un mensaje "Correcto" si se ingresa como clave la cadena "abc123".
*/

int main() {
    char usuario[30];
    char clave[30];

    printf("*************************************************\n");
    printf("<< PROGRAMA PARA INGRESAR CLAVE >>\n");
    printf("*************************************************\n");

    printf("\nIngresar usuario: ");
    gets(usuario);
    printf("Ingresar clave: ");
    gets(clave);

    if (strcmp(clave, "abc123") == 0) {
        printf("\nLa clave ingresada es la correcta.\n");
    } else
    {
        printf("\nLa clave ingresada no es la correcta.\n");
    }
    printf("\n*****************************************************\n");
    printf("<< PROGRAMA DESARROLLADO POR WALTER SANTILLAN >>");
    printf("\n*****************************************************\n");
    getch();
    return 0;
}
