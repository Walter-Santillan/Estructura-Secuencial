#include <stdio.h>

/*
Mostrar el abecedario de la 'A' a la 'Z' primero en mayúsculas y luego en minúsculas.
Utilizar una variable de tipo char dentro de un for.
*/

int main() {
    char letra;
    printf("*****************************************************************\n");
    printf("\t<< PROGRAMA QUE MUESTRA EL ABECEDARIO >>");
    printf("\n*****************************************************************\n\n");

    printf("\t<< Letras mayusculas >>\n");
    for (letra = 'A'; letra <= 'Z'; letra ++) {
        printf("%c - ", letra);
    }

    printf("\n\n");
    printf("\t<< Letras minusculas >>\n");
    for (letra = 'a'; letra <= 'z'; letra ++) {
        printf("%c - ", letra);
    }
    printf("\n");
    printf("\n*****************************************************************\n");
    printf("<< PROGRAMA DESARROLLADO POR WALTER SANTILLAN >>\n");
    printf("*****************************************************************\n");
    getch();
    return 0;
}
