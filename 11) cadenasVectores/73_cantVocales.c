#include <stdio.h>

/*
Ingresar por teclado una palabra en minúsculas. Mostrar por pantalla la cantidad de
vocales que tienen dicha palabra.
*/

int main() {
    char palabras[50];
    printf("Ingresar una palabra en minusculas: ");
    gets(palabras);

    // PARA UTILIZAR LA CANTIDAD DE VOCALES QUE TIENE UNA PALABRA HAY QUE UTILIZAR UN CONTADOR.
    int cant = 0;
    int x = 0;

    // EL BULCE WHILE SE UTILIZA PARA COMPARAR CARACTER A CARACTER.
    while (palabras[x] != '\0') {
        if (palabras[x] == 'a' || palabras[x] == 'e' || palabras[x] == 'i' || palabras[x] == 'o' || palabras == 'u') {
            cant ++;
        }
        x = x + 1;
    }
    printf("\nLa cantidad de vocales que tiene la palabra %s es: %d\n", palabras, cant);
    getch();
    return 0;
}
