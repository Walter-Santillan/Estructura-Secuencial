#include <stdio.h>
#define TAM_FILA 4 // DEFINO EL TAMAÑO DE LAS FILAS, 4 FILAS
#define TAM_COL 4 // DEFINO EL TAMAÑO DE LAS COLUMNAS, 4 COLUMNAS.
#define P printf
#define S scanf

/**************************************************************************************/
/******         Crear y cargar una matriz de 4 filas por 4 columnas.          *********/
/***************        Imprimir la diagonal principal.           *********************/
/**************************************************************************************/

// SE CREA UNA FUNCIÓN PARA CARGAR LOS DATOS EN UNA MATRIZ DE 4*4.
void cargar(int mat[TAM_FILA][TAM_COL])
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
            P("Ingresar elementos: "); // P = printf
            S("%d", &mat[fila][colu]); // S = scanf
        }
        P("\n");
    }
}

void imprimir(int mat[TAM_FILA][TAM_COL])
{
    int fila, colu;
    const int INICIO = 0;
    for(fila = INICIO; fila < TAM_FILA; fila ++)
    {
        for(colu = INICIO; colu < TAM_COL; colu ++)
        {
            P("%d ", mat[fila][colu]);
        }
        P("\n");
    }
}

// SE CREA UNA FUNCIÓN PARA MOSTRAR LA DIAGONAL PRINCIPAL DE LA MATRIZ.
void diagonalPrincipal(int mat[TAM_FILA][TAM_COL])
{
    // DECLARACIÓN DE UNA CONSTANTE PARA EVITAR LOS NROS MÁGICOS.
    const int INICIO = 0;
    const int FINAL = 4;
    int k = INICIO;

    P("\n****************************************\n");
    P("\tDiagonal Principal.\n");
    P("****************************************\n");

    for (k = INICIO; k < FINAL; k ++)
    {
        P("%d ", mat[k][k]);
    }
    P("\n");
}

int main()
{
    int mat[TAM_FILA][TAM_COL];

    cargar(mat);
    imprimir(mat);
    diagonalPrincipal(mat);

    return 0;
}
