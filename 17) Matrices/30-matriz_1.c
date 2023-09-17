#include <stdio.h>
#define TAM_FILA 3 // DEFINO EL TAMAÑO DE LAS FILAS, 3 FILAS
#define TAM_COL 5 // DEFINO EL TAMAÑO DE LAS COLUMNAS, 5 COLUMNAS.

/*
Crear una matriz de 3 filas por 5 columnas con elementos de tipo int,
cargar sus componentes y luego imprimirlas.
*/

// SE CREA UNA FUNCIÓN PARA CARGAR LOS DATOS EN UNA MATRIZ DE 3*5.
void cargar(int mat[TAM_FILA][TAM_COL])
{
    int fila, colu;
    // DECLARACIÓN DE UNA CONSTANTE PARA EVITAR LOS NROS MÁGICOS.
    const int INICIO = 0;
    // UTILIZO UN CILCO ANIDADO, EL PRIMER FOR INCREMENTA / RECORRE LAS FILAS.
    for (fila = INICIO; fila < TAM_FILA; fila ++)
    {
        // EL SEGUNDO FOR INCREMENTA / RECORRE LAS COLUMNAS.
        for(colu = INICIO; colu < TAM_COL; colu ++)
        {
            printf("Ingresar elementos: ");
            scanf("%d", & mat[fila][colu]);
        }
        printf("\n");
    }
}

// SE CREA UNA FUNCIÓN PARA IMPRIMIR LOS DATOS EN UNA MATRIZ DE 3*5.
void imprimir(int mat[TAM_FILA][TAM_COL])
{
    int fila, colu;
    // DECLARACIÓN DE UNA CONSTANTE PARA EVITAR LOS NROS MÁGICOS.
    const int INICIO = 0;
    // UTILIZO UN CILCO ANIDADO, EL PRIMER FOR INCREMENTA / RECORRE LAS FILAS.
    for(fila = INICIO; fila < TAM_FILA; fila ++)
    {
        // EL SEGUNDO FOR INCREMENTA / RECORRE LAS COLUMNAS.
        for(colu = INICIO; colu < TAM_COL; colu ++)
        {
            // ESTA SENTENCIA IMPRIME LA MATRIZ.
            printf("%d ", mat[fila][colu]);
        }
        // IMPRIME UN SALTO DE LINEA PARA QUE LOS DATOS SE MUESTREN EN FORMA MATRICIAL.
        printf("\n");
    }
}

int main()
{
    int mat[TAM_FILA][TAM_COL];
    cargar(mat);
    imprimir(mat);

    return 0;
}
