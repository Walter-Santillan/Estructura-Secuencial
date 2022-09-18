#include <stdio.h>
#include <conio.h>

/*
*************************************************************
            Cargar un vector de 5 elementos enteros.
        Imprimir el menor y un mensaje si se repite
                dentro del vector.
*************************************************************
*/

int main() {
    int vector[5];

    titulo();

    cargarElemento(vector);
    int men = imprimirElemento(vector);
    imprimirElemento(vector);

    printf("\nEl menor es: %d", men);
    repite(vector, men);

    autor();

    getch();
    return 0;
}

// FUNCIÓN PARA CARGAR EL VECTOR.
void cargarElemento(int menor[5])
{
    const int ELEMENTOS = 5;
    for (int i = 0; i < ELEMENTOS; i ++)
    {
        printf("Ingresar elementos: ");
        scanf("%d", & menor[i]);
    }
}

int imprimirElemento(int menor[5])
{
    const int ELEMENTOS = 5;
    // VARIABLE AUXILIAR.
    int men = menor[0]; // SE DEFINE QUE EL menor ES EL 1er ELEMENTO DEL VECTOR.
    for (int i = 1; i < ELEMENTOS; i ++) // EL CICLO SE INICIA DESDE LA POSICIÓN 1.
    {
        if (menor[i] < men) // C/ELEMENTO DEL VECTOR EN LA POSICIÓN i EMPIEZA EN 1.
        {
            men = menor[i];
        }
    }
    return men;
}

// SE VERIFICA SI SE REPITE EL VECTOR.
// se compara.
void repite(int vector[5], int men)
{
    const int ELEMENTOS = 5;
    int cont = 0;
    for (int i = 0; i < ELEMENTOS; i ++)
    {
        if (vector[i] == men) {
            cont ++;
        }
    }
    if (cont == 1) {
        printf("\nEl elemento del vector no se repite.\n");
    } else
    {
        printf("\nEl elemento del vector se encuentra repetido.\n");
    }
}

void titulo()
{
    printf("********************************************************\n");
    printf("\t<< PROGRAMA QUE MUESTRA\n \tEL MENOR VALOR. >>\n");
    printf("********************************************************\n");
}

void autor()
{
    printf("\n");
    printf("******************************************************************\n");
    printf("\t<< PROGRAMA DESARROLLADO POR WALTER SANTILLAN >>\n");
    printf("******************************************************************\n");
}
