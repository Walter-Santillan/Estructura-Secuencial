#include <stdio.h>

/*
Realizar un programa que solicite la carga de la edad y genero de dos personas.
Luego mostrar la edad y genero de la persona mayor. Para almacenar el genero
definir variables de tipo char donde se almacenará el caracter 'm' o 'f',
indicando si es del genero masculino o femenino.
*/

int main() {
    int edad_1;
    int edad_2;
    char genero_1;
    char genero_2;

    printf("******************************************************\n");
    printf("\t<< PROGRAMA MUESTRA EDAD Y GENERO >>\n");
    printf("******************************************************\n");
    printf("\nIngresar la edad de la primera persona: ");
    scanf("%d", & edad_1);
    printf("Ingresar el genero de la primera persona [m/f]: ");
    scanf(" %c", & genero_1);
    printf("\nIngresar la edad de la primera persona: ");
    scanf("%d", & edad_2);
    printf("Ingresar el genero de la primera persona[m/f]: ");
    scanf(" %c", & genero_2);

    if (edad_1 > edad_2) {
        printf("\nLa edad de la persona mayor es: %d", edad_1);
        if (genero_1 == 'f') {
            printf("\nGenero femenino.\n");
        } else
        {
            if (genero_1 == 'm') {
                printf("\nGenero masculino.\n");
            }
        }
    }
    else
    {
        if (edad_2 > edad_1) {
            printf("\nLa edad de la persona mayor es: %d", edad_2);
            if (genero_2 == 'f') {
                printf("\nGenero femenino.\n");
            } else
            {
                if (genero_2 == 'm') {
                    printf("\nGenero masculino\n.");
                }
            }
        } else
        {
            printf("\nTienen la misma edad.\n");
        }
    }
    printf("\n******************************************************\n");
    printf("<< PROGRAMA DESARROLLADO POR WALTER SANTILLAN >>\n");
    printf("******************************************************\n");
    getch();
    return 0;
}
