#include <stdio.h>

/*
Definir tres variables de tipo char y cargar dos por asignación y la tercera por teclado.
Imprimir los valores de las mismas.
*/

int main() {
    // VARIABLES TIPO CHAR CARGADAS POR ASIGNACIÓN.
    char var_1 = 97;
    char var_2 = 'a';
    // VARIABLES TIPO CHAR QUE SE CARGA POR TECLADO.
    char var_3;

    printf("\nIngresar un caracter: ");
    scanf(" %c", & var_3);
    // IMPRIME LAS VARIABLES.
    printf("%c - ", var_1);
    printf("%c - ", var_2);
    printf("%c - ", var_3);
    printf("\n");
    getch();
    return 0;
}
