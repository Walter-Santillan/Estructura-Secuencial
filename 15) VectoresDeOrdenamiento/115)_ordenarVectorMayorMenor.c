#include <stdio.h>
#include <conio.h>

/*
/        Cargar un vector de 5 elementos enteros. /
/ Ordenarlo de mayor a menor y mostrarlo por pantalla,/
/ luego ordenar de menor a mayor e imprimir nuevamente./
*/

int main() {
    int vector[5];

    titulo();

    cargarVector(vector);
    ordenarMayorMenor(vector);
    printf("\n\t<< ORDENADO DE MAYOR A MENOR >>\n");
    imprimirMayorMenor(vector);
    ordenarMenorMayor(vector);
    printf("\n\t<< ORDENADO DE MENOR A MAYOR >>\n");
    imprimirMayorMenor(vector);

    autor();

    getch();
    return 0;
}

void cargarVector(int vector[5])
{
    for (int i = 0; i < 5; i ++)
    {
        printf("Ingresar vector: ");
        scanf("%d", & vector[i]);
    }
}

void ordenarMayorMenor(int vector[5])
{
    for (int i = 0; i < 4; i ++)
    {
        for (int j = 0; j < 4 - i; j ++)
        {
            if (vector[j] < vector[j + 1])
            {
                int aux = vector[j];
                vector[j] = vector[j + 1];
                vector[j + 1] = aux;
            }
        }
    }
}

void ordenarMenorMayor(int vector[5])
{
    for (int i = 0; i < 4; i ++)
    {
        for (int j = 0; j < 4 - i; j ++)
        {
            if (vector[j] > vector[j + 1])
            {
                int aux = vector[j];
                vector[j] = vector[j + 1];
                vector[j + 1] = aux;
            }
        }
    }
}
// ESTA FUNCIÓN SE LLAMA DOS VECES.
void imprimirMayorMenor(int vector[5])
{
    for (int i = 0; i < 5; i ++)
    {
        printf("%d - ", vector[i]); // IMPRIME DE FORMA LINEAL.
    }
    printf("\n");
}

void titulo()
{
    printf("********************************************************\n");
    printf("\t<< PROGRAMA QUE MUESTRA\n \tSUELDOS ORDENADOS DE MENOR A MAYOR. >>\n");
    printf("********************************************************\n");
}

void autor()
{
    printf("\n");
    printf("******************************************************************\n");
    printf("\t<< PROGRAMA DESARROLLADO POR WALTER SANTILLAN >>\n");
    printf("******************************************************************\n");
}
