#include <stdio.h>

/*Ingresar tu color favorito.*/

typedef char cadena [30];

int main()
{
    printf("\t<< EJEMPLO DE COMO USAR EL TYPEDEF >>\n");

    cadena unColor;
    printf("\nIngresar tu color favorito: ");
    fflush(stdin);
    gets(unColor);

    printf("\nTu color favorito es: %s\n", unColor);
    return 0;
}
