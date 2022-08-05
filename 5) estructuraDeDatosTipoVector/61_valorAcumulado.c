#include <stdio.h>

/*
Desarrollar un programa que permita ingresar un vector de 8 elementos, e informe:
El valor acumulado de todos los elementos del vector.
El valor acumulado de los elementos del vector que sean mayores a 36.
Cantidad de valores mayores a 50.
*/

int main() {
    int elementos[8];
    int suma = 0;
    int cant = 0;
    int mayor_36 = 0;
    int mayor_50 = 0;
    int i;

    printf("===============================================================\n");
    printf("\t<< PROGRAMA QUE CALCULA VALORES ACUMULADOS >>");
    printf("\n===============================================================\n");

    // SE CARGAN LOS ELEMENTOS DEL VECTOR.
    for (i = 0; i < 8; i ++) {
        printf("Ingresar elementos: ");
        scanf("%d", & elementos[i]);
    }

    // ACUMULA TODOS LOS ELEMENTOS QUE COMPONEN EL VECTOR.
    for (i = 0; i < 8; i ++) {
        suma = suma + elementos[i];
    }
    printf("\nLa suma de los 8 elementos es: %d", suma);

    // ACUMULAR LOS ELEMENTOS DEL VECTOR QUE SEAN MAYORES A 36, UTILIZAR OTRO VECTOR.
    for(i = 0; i < 8; i ++) {
        if (elementos[i] > 36) {
            mayor_36 = mayor_36 + elementos[i];
        }
    }
    printf("\nEl valor acumulado de los elementos del vector mayores a 36 es: %d\n", mayor_36);

    // CONTAR LOS VALORES DEL ELEMENTO MAYORES A 50.
    for (i = 0; i < 8; i ++) {
        if (elementos[i] > 50) {
            cant ++;
        }
    }
    printf("La cantidad de valores mayores a 50 es: %d\n", cant);

    printf("\n===============================================================\n");
    printf("<< PROGRAMA DESARROLLADO POR WALTER SANTILLAN >>");
    printf("\n===============================================================\n");
    getch();
    return 0;
}
