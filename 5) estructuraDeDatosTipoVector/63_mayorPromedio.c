#include <stdio.h>

/*
Se tienen las notas del primer parcial de los alumnos de dos cursos, el curso A y el
curso B, cada curso cuenta con 5 alumnos.
Realizar un programa que muestre el curso que obtuvo el mayor promedio general.
*/

int main() {
    int curso_A[5];
    int curso_B[5];
    float mayorProm_A;
    float mayorProm_B;
    int suma_A = 0;
    int suma_B = 0;

    printf("*************************************************************\n");
    printf("\t<< PROGRAMA OBTENER EL MAYOR PROMEDIO >>");
    printf("\n*************************************************************\n");

    printf("\t<< CURSO A >>\n");
    for (int i = 0; i < 5; i ++) {
        printf("Ingresar nota del curso A: ");
        scanf("%d", & curso_A[i]);
    }
    printf("\t<< CURSO B >>\n");
    for (int i = 0; i < 5; i ++) {
        printf("Ingresar nota del curso B: ");
        scanf("%d", & curso_B[i]);
    }
    for (int i = 0; i < 5; i ++) {
        suma_A = suma_A + curso_A[i];
        suma_B = suma_B + curso_B[i];
    }

    mayorProm_A = suma_A / 5;
    mayorProm_B = suma_B / 5;
    printf("\nPromedio del curso A es: %.2f\n", mayorProm_A);
    printf("Promedio del curso B es: %.2f\n", mayorProm_B);

    if (mayorProm_A == mayorProm_B) {
        printf("\nLos cursos A y B tienen el mismo promedio\n");
    } else
    {
        if (mayorProm_A > mayorProm_B) {
            printf("\nEl curso A tiene el mayor promedio\n");
        } else
        {
            printf("\nEl curso B tiene el mayor promedio\n");
        }
    }
    printf("\n*************************************************************\n");
    printf("<< PROGRAMA DESARROLLADO POR WALTER SANTILLAN >>");
    printf("\n*************************************************************\n");
    getch();
    return 0;
}
