#include <stdio.h>
#define P printf
#define S scanf
#define TAM_FILA 3 // DEFINO EL TAMAÑO DE LAS FILAS, 3 FILAS
#define TAM_COL 4 // DEFINO EL TAMAÑO DE LAS COLUMNAS, 4 COLUMNAS.


/******************************************************/
/*Crear y cargar una matriz de 3 filas por 4 columnas.*/
/*********     Imprimir la primer fila.     ***********/
/*********     Imprimir la última fila e    ***********/
/*********     imprimir la primer columna.  ***********/
/******************************************************/

// SE CREA UNA FUNCIÓN PARA CARGAR LOS DATOS EN UNA MATRIZ DE 3*4.
void cargarMatriz(int mat[TAM_FILA][TAM_COL])
{
    int fila, col;
    // DECLARACIÓN DE UNA CONSTANTE PARA EVITAR LOS NROS MÁGICOS.
    const int INICIO = 0;
    for(fila = INICIO; fila < TAM_FILA; fila ++) // TAM_FILA REPRESENTA 3 FILAS.
    {
        for(col = INICIO; col < TAM_COL; col ++) // TAM_COL REPRESENTA 4 COLUMNAS.
        {
            P("Ingresar elementos: "); // P = printf.
            S("%d", &mat[fila][col]); // S = scanf.
        }
        P("\n"); // SALTO DE LINEA.
    }
}


void primeraFila(int mat[TAM_FILA][TAM_COL])
{
    P("\tPRIMERA FILA: \n");
    int fila, col;
    // DECLARACIÓN DE UNA CONSTANTE PARA EVITAR LOS NROS MÁGICOS.
    const int INICIO = 0;
    const int FILA_CERO = 0;

    for(col = INICIO; col < TAM_COL; col ++)
    {
        P("%d ", mat[FILA_CERO][col]); // VARÍA LAS COLUMNAS Y LA FILA CERO QUEDA CONSTANTE.
    }
    P("\n");
}

void ultimaFila(int mat[TAM_FILA][TAM_COL])
{
    P("\tULTIMA FILA: \n");
    int fila, col;
    const int INICIO = 0;
    const int FILA_DOS = 2;

    for(col = INICIO; col < TAM_COL; col ++)
    {
        P("%d ", mat[FILA_DOS][col]); // VARÍA LAS COLUMNAS Y LA FILA DOS QUEDA CONSTANTE.
    }
    P("\n");
}

void primeraColumna(int mat[TAM_FILA][TAM_COL])
{
    int fila, col;
    const int INICIO = 0;
    const int COLUMNA_CERO = 0;
    P("\tPRIMERA COLUMNA: \n");
    for(fila = INICIO; fila < TAM_FILA; fila ++)
    {
        P("%d ", mat[fila][COLUMNA_CERO]); // VARÍA LAS FILAS Y LA COLUMNA CERO QUEDA CONSTANTE.
    }
    P("\n");
}

void matrizCompleta(int mat[TAM_FILA][TAM_COL])
{
    int fila, col;
    const int INICIO = 0;
    P("\tMATRIZ COMPLETA: \n");
    for(fila = INICIO; fila < TAM_FILA; fila ++)
    {
        for(col = INICIO; col < TAM_COL; col ++)
        {
            P("%d ", mat[fila][col]);
        }
        P("\n");
    }
}

int main()
{
    int mat[TAM_FILA][TAM_COL];

    cargarMatriz(mat);
    matrizCompleta(mat);
    primeraFila(mat);
    ultimaFila(mat);
    primeraColumna(mat);

    return 0;
}
