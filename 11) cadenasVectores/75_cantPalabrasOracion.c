#include <stdio.h>

/*
Ingresar por teclado una oración de hasta 200 caracteres.
Se sabe que el operador ingresa solo un caracter en blanco entre palabras.
Imprimir por pantalla la cantidad de palabras que tiene la oración.
*/

int main() {
    char oracion[201];

    printf("Ingresar una oracion: ");
    gets(oracion);

    int cantPalabras = 0;
    int espacios = 0;

    while (oracion[cantPalabras] != '\0') {
        if (oracion[cantPalabras] == ' ') {
            espacios ++;
        }
        cantPalabras ++;
    }

    // SUMA LA CANTIDAD DE PALABRAS.
    int palabras = espacios + 1;
    printf("\nLa cantidad de palabras que tiene la oracion es: %d\n", palabras);
}
