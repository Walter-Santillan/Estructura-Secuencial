#include <stdio.h>

/*
Ingresar una palabra por teclado y Mostrar por pantalla la palabra y la cantidad
de caracteres que tiene dicha palabra.
*/

int main() {
    char palabra[30];
    int cantCaracteres = 0;

    printf("Ingresar una palabra: ");
    gets(palabra);

    while (palabra[cantCaracteres] != '\0') {
        cantCaracteres ++;
    }
    printf("\nLa palabra %s tiene %d caracteres\n", palabra, cantCaracteres);

    getch();
    return 0;
}
