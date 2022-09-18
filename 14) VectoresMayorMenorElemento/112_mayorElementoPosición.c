#include <stdio.h>
#include <conio.h>

/*
******************************************************************
        Confeccionar un programa que defina
    en la main un vector de 5 elementos de tipo entero.
        Cargar e imprimir el mayor elemento y su posción.
******************************************************************
*/

int main() {
    int vector[5];

    titulo();

    cargarElementos(vector);
    imprimirMayor(vector);

    autor();

    getch();
    return 0;
}

void cargarElementos(int vector[5])
{
    const int ELEMENTOS = 5;
    for (int i = 0; i < ELEMENTOS; i ++)
    {
        printf("Ingresar elementos: ");
        scanf("%d", & vector[i]);
    }
}

void imprimirMayor(int vector[5])
{
    const int MAYOR = 5;
    int may = vector[0];
    int pos = 0;
    for (int i = 1; i < MAYOR; i ++)
    {
        if (vector[i] > may)
        {
            may = vector[i];
            pos = i;
        }
    }
    printf("\nEl mayor elemento del vector es: %d\n", may);
    printf("Se encuentra en la posicion: %d\n", pos);
}

void titulo()
{
    printf("********************************************************\n");
    printf("\t<< PROGRAMA QUE MUESTRA\n \tEL MAYOR Y SU POSICION. >>\n");
    printf("********************************************************\n");
}

void autor()
{
    printf("\n");
    printf("******************************************************************\n");
    printf("\t<< PROGRAMA DESARROLLADO POR WALTER SANTILLAN >>\n");
    printf("******************************************************************\n");
}
