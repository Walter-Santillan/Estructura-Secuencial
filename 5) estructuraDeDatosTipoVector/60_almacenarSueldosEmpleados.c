#include <stdio.h>

/*
Una empresa tiene dos turnos (mañana y tarde) en los que trabajan 8 empleados
(4 por la mañana y 4 por la tarde).
Confeccionar un programa que permita almacenar los sueldos de los empleados
agrupados por turno (definir los dos vectores con componentes de tipo float)
Imprimir los gastos en sueldos de cada turno.
*/

int main() {
    float sueldosTM[4];
    float sueldosTT[4];
    float gastoTM = 0;
    float gastoTT = 0;

    printf("===============================================================\n");
    printf("\t<< PROGRAMA QUE CALCULA SUELDOS DE EMPLEADOS >>");
    printf("\n===============================================================\n");
    // CON DOS VECTORES SE CARGAN LOS SUELDOS.
    printf("<< SUELDOS TURNO MANIANA >>\n");
    for (int i = 0; i < 4; i ++) {
        printf("Ingresar sueldos: ");
        scanf("%f", & sueldosTM[i]);
    }
    printf("\n<< SUELDOS TURNO TARDE >>\n");
    for (int i = 0; i < 4; i ++) {
        printf("Ingresar sueldos: ");
        scanf("%f", & sueldosTT[i]);
    }
    // UTILIIZAR OTRO VECTOR PARA REALIZAR LA SUMA.
    for (int i = 0; i < 4; i ++) {
        gastoTM = gastoTM + sueldosTM[i];
        gastoTT = gastoTT + sueldosTT[i];
    }
    printf("\n***********************************************\n");
    printf("El gasto en sueldos del turno mañana es: %.2f\n", gastoTM);
    printf("El gasto en sueldos del turno tarde es: %.2f\n", gastoTT);

    printf("\n===============================================================\n");
    printf("<< PROGRAMA DESARROLLADO POR WALTER SANTILLAN >>");
    printf("\n===============================================================\n");
    getch();
    return 0;
}
