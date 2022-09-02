#include <stdio.h>
#include <string.h>
#include <conio.h>

/*
Cargar tres nombres por teclado. Generar un cuarto string que almacene
los tres nombres ingresados por teclado en orden alfabético separados por una coma.
*/

int main() {
    char nombre_1[50];
    char nombre_2[50];
    char nombre_3[50];
    char totalNombres[150];

    printf("*************************************************\n");
    printf("\t<< PROGRAMA ORDENA\n \tCADENAS DE MENOR A MAYOR >>\n");
    printf("*************************************************\n");

    printf("\nIngresar el primer nombre: ");
    gets(nombre_1);
    printf("Ingresar el segundo nombre: ");
    gets(nombre_2);
    printf("Ingresar el tercer nombre: ");
    gets(nombre_3);

    // ANALIZAR SI nombre_1 ES EL MENOR ALFABÉTICAMENTE.
    if (strcmp(nombre_1, nombre_2) < 0 && strcmp(nombre_1, nombre_3) < 0) {
        // SI LA CONDICIÓN SE CUMPLE QUIERE DECIR QUE nombre_1 ES EL MENOR.
        // COPIAR A totalNombre EL CONTENIDO EN nombre_1.
        strcpy(totalNombres, nombre_1);
        strcat(totalNombres, "\n-> ");
        if (strcmp(nombre_2, nombre_3) < 0) {
            // SE GUARDA CUÁL DE LOS DOS ES EL MENOR.
            strcat(totalNombres, nombre_2);
            strcat(totalNombres, "\n-> ");
            strcat(totalNombres, nombre_3);
        } else
        {
            strcat(totalNombres, nombre_3);
            strcat(totalNombres, "\n-> ");
            strcat(totalNombres, nombre_2);
        }
    } else
    {
        if (strcmp(nombre_2, nombre_3) < 0) {
            strcpy(totalNombres, nombre_2);
            strcat(totalNombres, "\n-> ");
            if (strcmp(nombre_1, nombre_3) < 0) {
                strcat(totalNombres, nombre_1);
                strcat(totalNombres, "\n-> ");
                strcat(totalNombres, nombre_3);
            } else
            {
                strcat(totalNombres, nombre_3);
                strcat(totalNombres, "\n-> ");
                strcat(totalNombres, nombre_1);
            }
        } else
        {
            strcpy(totalNombres, nombre_3);
            strcat(totalNombres, "\n-> ");
            if (strcmp(nombre_1, nombre_2) < 0) {
                strcat(totalNombres, nombre_1);
                strcat(totalNombres, "\n-> ");
                strcat(totalNombres, nombre_2);
            } else
            {
                strcat(totalNombres, nombre_2);
                strcat(totalNombres, "\n-> ");
                strcat(totalNombres, nombre_1);
            }
        }
    }
    printf("\nLos nombres ordenados alfabeticamente son: \n-> %s\n", totalNombres);

    printf("\n*****************************************************\n");
    printf("<< PROGRAMA DESARROLLADO POR WALTER SANTILLAN >>");
    printf("\n*****************************************************\n");

    getch();
    return 0;
}
