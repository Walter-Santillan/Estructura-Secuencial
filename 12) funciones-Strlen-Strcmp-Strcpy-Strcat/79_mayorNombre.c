#include <stdio.h>
#include <conio.h>
#include <string.h>

/*
Ingresar dos nombres por teclado. Mostrar un mensaje si son iguales y sino mostrar el
que es mayor alfabéticamente.
*/

int main() {
    char nom_1[30];
    char nom_2[30];

    printf("\nIngresar el primer nombre: ");
    gets(nom_1);
    printf("Ingresar el segundo nombre: ");
    gets(nom_2);

    // CON LA FUNCIÓN STRCMP SE COMPARA CARACTERES.
    if (strcmp(nom_1, nom_2) == 0) {
        printf("\nLos dos nombres son iguales.\n");
    } else
    {
        if (strcmp(nom_1, nom_2) > 0) {
            printf("\n%s es el mayor alfabeticamente.\n", nom_1);
        } else
        {
            printf("\n%s es el mayor alfabeticamente.\n", nom_2);
        }
    }

    getch();
    return 0;
}
