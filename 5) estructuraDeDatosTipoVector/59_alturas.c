#include <stdio.h>

/*
Definir un vector de 5 componentes de tipo float que representen las alturas de 5 personas.
Obtener el promedio de las mismas. Contar cuántas personas son más altas que el promedio
y cuántas más bajas.
*/

int main() {
    float alturas[5];
    float promedio;
    int cantMayor = 0;
    int cantMenor = 0;
    float suma = 0;

    printf("*****************************************\n");
    printf("\t<< PROGRAMA QUE MUESTRA\n \tLAS ALTURAS PROMEDIO >>");
    printf("\n*****************************************\n");

    // CARGA DE DATOS.
    for (int i = 0; i < 5; i ++) {
        printf("Ingresar alturas: ");
        scanf("%f", & alturas[i]);
    }

    for (int i = 0; i < 5; i ++) {
        suma = suma + alturas[i];
    }
    promedio = suma / 5;
    printf("\nEl promedio de las alturas es: < %.2f mts >", promedio);

    // CONTAR LAS PERSONAS MAS ALTAS QUE EL PROMEDIO.
    for (int i = 0; i < 5; i ++) {
        if (alturas[i] > promedio) {
            cantMayor ++;
        } else
        {
            if (alturas[i] < promedio) {
                cantMenor ++;
            }
        }
    }
    printf("\nCantidad de personas mas altas que el promedio: < %d >", cantMayor);
    printf("\nCantidad de personas mas bajas que el promedio: < %d >\n", cantMenor);

    printf("\n*************************************************\n");
    printf("<< PROGRAMA DESARROLLADO POR WALTER SANTILLAN >>");
    printf("\n*************************************************\n");

    getch();
    return 0;
}
