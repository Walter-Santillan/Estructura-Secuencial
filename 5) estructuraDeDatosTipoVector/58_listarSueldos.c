#include <stdio.h>

/*
Se desea guardar los sueldos de 5 operarios.
Según lo conocido deberíamos definir 5 variables si queremos tener en un cierto momento
los 5 sueldos almacenados en memoria.
*/
int main() {
    float sueldos[5];

    printf("*********************************************\n");
    printf("\t<< PROGRAMA QUE LISTA EL SUELDO >>");
    printf("\n*********************************************\n");
    // CARGAMOS EL VECTOR.
    for (int i = 1; i <=5; i ++) {
        printf("Ingresar el valor del sueldo: ");
        scanf("%f", & sueldos[i]);
    }
    // IMPRIMIR EL VECTOR, LISTAR EL VECTOR.
    printf("\n");
    for (int i = 1; i <= 5; i ++) {
        printf("%.2f", sueldos[i]);
        printf("\n");
    }
    printf("\n*************************************************\n");
    printf("<< PROGRAMA DESARROLLADO POR WALTER SANTILLAN >>");
    printf("\n*************************************************\n");
    getch();
    return 0;
}
