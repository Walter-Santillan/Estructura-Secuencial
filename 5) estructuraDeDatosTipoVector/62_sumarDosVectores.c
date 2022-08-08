#include <stdio.h>

/*
Realizar un programa que pida la carga de dos vectores numéricos enteros de 4 elementos.
Obtener la suma de los dos vectores, dicho resultado guardarlo en un tercer vector del mismo
tamaño. Sumar componente a componente.
*/

int main() {
    int num_1[4];
    int num_2[4];
    int num_3[4];
    int i;

    printf("***********************************************************\n");
    printf("\t<<  PROGRAMA QUE SUMA\n \tLOS ELEMENTOS DE DOS VECTORES >>");
    printf("\n***********************************************************\n");

    printf("/*******************************************************************************************/");
    printf("\nRealizar un programa que pida la carga de dos vectores numericos enteros de 4 elementos.\nObtener la suma de los dos vectores, dicho resultado guardarlo en un tercer vector del mismo\ntamanio. Sumar componente a componente.\n");
    printf("/*******************************************************************************************/\n");

    printf("\tPrimer vector\n");
    for (i = 0; i < 4; i ++) {
        printf("Ingresar elementos del primer vector: ");
        scanf("%d", & num_1[i]);
    }

    printf("\tSegundo vector\n");
    for (i = 0; i < 4; i ++) {
        printf("Ingresar elementos del segundo vector: ");
        scanf("%d", & num_2[i]);
    }
    // VECTOR PARA SUMAR CADA ELEMENTO.
    for (i = 0; i < 4; i ++) {
        num_3[i] = num_1[i] + num_2[i];
    }
    printf("\n");
    printf("\tTercer vector resultante\n");
    for (i = 0; i < 4; i ++) {
        printf("%d- ", num_3[i]);
    }

    printf("\n**********************************************************\n");
    printf("<< PROGRAMA DESARROLLADO POR WALTER SANTILLAN >>");
    printf("\n**********************************************************\n");
    getch();
    return 0;
}
