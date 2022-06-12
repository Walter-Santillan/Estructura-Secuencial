#include <stdio.h>

/*Construir un programa que ingrese un carácter y determine si es una vocal*/

int main()
{
    char caracter;

    printf("\t<< PROGRAMA VOCALES. >>\n");
    printf("\nIngresar una letra: ");
    scanf("%c", & caracter);

    switch(caracter)
    {
        case 'A':
            printf("\tEl caracter (%c) es una vocal.\n", caracter);
            break;
        case 'a':
            printf("\tEl caracter (%c) es una vocal.\n", caracter);
            break;
        case 'E':
            printf("\tEl caracter (%c) es una vocal.\n", caracter);
            break;
        case 'e':
            printf("\tEl caracter (%c) es una vocal.\n", caracter);
            break;
        case 'I':
            printf("\tEl caracter (%c) es una vocal.\n", caracter);
            break;
        case 'i':
            printf("\tEl caracter (%c) es una vocal.\n", caracter);
            break;
        case 'O':
            printf("\tEl caracter (%c) es una vocal.\n", caracter);
            break;
        case 'o':
            printf("\tEl caracter (%c) es una vocal.\n", caracter);
            break;
        case 'U':
            printf("\tEl caracter (%c) es una vocal.\n", caracter);
            break;
        case 'u':
            printf("\tEl caracter (%c) es una vocal.\n", caracter);
            break;
        default:
            printf("\nOpcion invalida!!. Intente nuevamente.\n");
            break;
    }
}
