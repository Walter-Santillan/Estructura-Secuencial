#include <stdio.h>

/*
Cargar un vector de 10 elementos y verificar posteriormente si el mismo está ordenado de menor a mayor.
*/

int main() {
    int vec[10];
    int orden;

    printf("*******************************************************\n");
    printf("\t<< PROGRAMA UTILIZA BANDERA/FLAG");
    printf("\n*******************************************************\n");
    for (int i = 0; i < 10; i ++) {
        printf("Ingresar el elemento: ");
        scanf("%d", & vec[i]);
    }
    // APLICACIÓN DE UNA BANDERA/FLAG.
    orden = 1;
    for (int i = 0; i < 9; i ++) {
        if (vec[i + 1] < vec[i]) {
            orden = 0;
        }
    }

    if (orden == 1) {
        printf("\nEl vector esta ordenado de menor a mayor\n");
    } else
    {
        printf("\nEl vector no esta ordenado de manor a mayor\n");
    }
    printf("\n*******************************************************\n");
    printf("<< PROGRAMA DESARROLLADO POR WALTER SANTILLAN >>");
    printf("\n*******************************************************\n");
    getch();
    return 0;
}
