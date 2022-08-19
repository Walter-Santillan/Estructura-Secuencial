#include <stdio.h>

/*
Cargar los nombres de dos personas y sus edades. Mostrar el nombre de la persona
que tiene mayor edad. Los nombres de las personan no superan los 20 caracteres.
*/

int main() {
    // SE DEFINEN DOS VARIABLES TIPO VECTOR, CON ELEMENTOS TIPOS CHAR.

    char nombre_1[20]; // VECTOR TAMAÑO 20.
    char nombre_2[20]; // VECTOR TAMAÑO 20.
    int edad_1;
    int edad_2;

    printf("**************************************************************\n");
    printf("\t<< PROGRAMA QUE MUESTRA EDAD >>\n");
    printf("**************************************************************\n");

    printf("Ingresar nombre de la primera persona: ");
    gets(nombre_1); // LA FUNCIÓN GETS SE UTILIZA PARA CARGAR UNA CADENA DE CARACTERES.
    printf("Ingresar edad 1: ");
    scanf("%d", & edad_1);
    fflush(stdin); // CON LA FUNCIÓN (fflush) SE LIBERA EL BUFFER DEL TECLADO.
    printf("Ingresar nombre de la segunda persona: ");
    gets(nombre_2);
    printf("Ingresar edad 2: ");
    scanf("%d", & edad_2);

    if (edad_1 > edad_2) {
        printf("\n%s tiene mayor edad que %s.\n", nombre_1, nombre_2);
    } else
    {
        if (edad_2 > edad_1) {
            printf("\n%s tiene mayor edad que %s.\n", nombre_2, nombre_1);
        } else
        {
            printf("\n%s y %s tienen la misma edad. \n", nombre_1, nombre_2);
        }
    }

    printf("\n**************************************************************\n");
    printf("<< PROGRAMA DESARROLLADO POR WALTER SANTILLAN >>\n");
    printf("**************************************************************\n");
    getch();
    return 0;
}
