#include <stdio.h>
#include <conio.h>

/*
Cargar un vector de 10 elementos y verificar posteriormente
si el mismo est� ordenado de menor a mayor.
Hacer las dos actividades en funciones distintas.
*/

int main() {
    titulo();

    int vector[10];
    cargar(vector);
    ordenado(vector);

    autor();

    getch();
    return 0;
}

// CON ESTA FUNCI�N SE CARGAN LOS ELEMENTOS.
void cargar (int vector[10])
{
    for (int i = 0; i < 10; i ++)
    {
        printf("Ingresar elementos: ");
        scanf("%d", & vector[i]);
    }
}

// LA FUNCI�N "ORDENADO" ANALIZA SI LOS ELEMENTOS ESTAN ORDENADO DE MENOR A MAYOR O NO.
void ordenado (int vector[10])
{
    // SE UTILIZA UNA BANDERA IGUAL A 1, QUE INDICA QUE EL VECTOR EST� ORDENADO.
    int ordenado = 1;
    //  i < 9 -> COMPARA EL ANTE �LTIMO ELEMENTO DEL VECTOR CON EL �LTIMO,
    // SE VA A EJECUTAR SOLO UNA VEZ.
    for (int i = 0; i < 9; i ++)
    {
        if (vector[i + 1] < vector[i])
        {
            ordenado = 0; // INDICA QUE EL VECTOR NO EST� ORDENADO, POR ESO ES IGUAL A CERO.
            break;
        }
    }

    if (ordenado == 1)
    {
        printf("\nLos elementos del vector estan ordenados de menor a mayor.\n");
    }else
    {
        if (ordenado == 0) {
          printf("\nLos elementos del vector no estan ordenados de menor a mayor.\n");
        }
    }
}

void titulo()
{
    printf("********************************************************\n");
    printf("\t<< PROGRAMA QUE MUESTRAN\n \tELEMENTOS ORDENADOS. >>\n");
    printf("********************************************************\n");
}

void autor()
{
    printf("\n");
    printf("******************************************************************\n");
    printf("\t<< PROGRAMA DESARROLLADO POR WALTER SANTILLAN >>\n");
    printf("******************************************************************\n");
}
