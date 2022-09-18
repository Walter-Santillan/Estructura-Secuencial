#include <stdio.h>
#include <conio.h>

/*
Se debe crear un vector donde almacenar 5 sueldos. Ordenar el vector sueldos de
menor a mayor.
*/

int main() {
    int sueldos[5];

    titulo();

    cargar(sueldos);
    ordenar(sueldos);
    printf("\n\t***************************");
    printf("\n\tORDENADOS DE MENOR A MAYOR.\n");
    printf("\t***************************\n");
    imprimirSueldos(sueldos);

    autor();

    getch();
    return 0;
}

// FUNCIÓN PARA INGRESAR 5 SUELDOS.
void cargar(int sueldos[5])
{
    for (int i = 0; i < 5; i ++)
    {
        printf("Ingresar los sueldos: ");
        scanf("%d", & sueldos[i]);
    }
}

// FUNCIÓN QUE ORDENA LOS SUELDOS DE MENOR A MAYOR.
// SE UTILIZA UN CICLO ANIDADO PARA QUE SE ORDENE TODO EL VECTOR POR COMPLETO.
void ordenar(int sueldos[5])
{
    for (int i = 0; i < 4; i ++) // ES 4 PORQUE HAY UN COMPONENTE DEL VECTOR QUE ESTÁ ORDENADO.
    {
        for (int j = 0; j < 4 - i; j ++) // HACE QUE EL CICLO SE REPITA MENOS CANT. DE VECES.
        {
            if (sueldos[j] > sueldos[j + 1]) // COMPARA SI EL 1er ELEMENTO DEL VECTOR ES MAYOR
                                             // AL SEGUNDO ELEMENTO PARA QUE QUEDE EN LA ÚLTIMA POSICIÓN.
            {
                int aux = sueldos[j]; // SE INTERCAMBIA EL CONTENIDO DE LAS VARIABLES.
                sueldos[j] = sueldos[j + 1];
                sueldos[j + 1] = aux;
            }
        }
    }
}

// FUNCIÓN PARA MOSTRAR POR PANTALLA LOS SUELDOS ORDENADOS.
void imprimirSueldos(int sueldos[5])
{
    printf("\n");
    for (int i = 0; i < 5; i ++)
    {
        printf("%d - ", sueldos[i]);
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
