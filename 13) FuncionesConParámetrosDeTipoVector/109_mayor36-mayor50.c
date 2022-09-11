#include <stdio.h>
#include <conio.h>

/*
Desarrollar un programa que permita administrar un vector de 8 elementos tipo entero.
Se deben codificar las siguientes funciones:
1-Carga del vector.
2-Retornar el valor acumulado de todos los elementos del vector.
3-Retornar el valor acumulado de los elementos del vector que sean mayores a 36.
4-Retornar la cantidad de componentes con valores mayores a 50.
*/

int main()
{
    titulo();

    int elementos[8];
    cargar(elementos);
    printf("\nEl valor acumulado de todos los elementos es: %d", valorAcum(elementos));
    printf("\nEl valor acumulado de los elementos mayores a 36 es: %d", mayor_36(elementos));
    printf("\nLa cantidad de elementos mayores a 50 es: %d", mayor_50(elementos));
    printf("\nLa cantidad de elementos menores a 50 es: %d\n", menor_50(elementos));
    autor();

    getch();
    return 0;
}

void cargar(int elementos[8])
{
    // SE DEFINE UNA CONSTANTES SIMBÓLICAS PARA EVITAR LOS NÚMEROS MÁGICOS.
    const int VECTOR = 8;
    printf("\n");
    for (int i = 0; i < VECTOR; i ++) {
        printf("Ingresar elementos: ");
        scanf("%d", & elementos[i]);
    }
}

int valorAcum(int elementos[8])
{
    printf("\n<< VALORES ACUMULADOS >>.");
    int suma = 0;
    // SE DEFINE UNA CONSTANTES SIMBÓLICAS PARA EVITAR LOS NÚMEROS MÁGICOS.
    const int VECTOR = 8;
    for (int i = 0; i < VECTOR; i ++) {
        suma = suma + elementos[i];
    }
    return suma;
}

int mayor_36(int elementos[8])
{
    printf("\n<< VALORES MAYORES A 36 >>.");
    int suma = 0;
    // SE DEFINEN DOS CONSTANTES SIMBÓLICAS PARA EVITAR LOS NÚMEROS MÁGICOS.
    const int NUMERO = 36;
    const int VECTOR = 8;
    for (int i = 0; i < VECTOR; i ++)
    {
        if (elementos[i] > NUMERO)
        {
            suma = suma + elementos[i];
        }
    }
    return suma;
}

int mayor_50(int elementos[8])
{
    printf("\n<< COMPONENTES MAYORES A 50 >>.");
    int mayor_50 = 0;
    // SE DEFINEN DOS CONSTANTES SIMBÓLICAS PARA EVITAR LOS NÚMEROS MÁGICOS.
    const int NUMERO = 50;
    const int VECTOR = 8;
    for (int i = 0; i < VECTOR; i ++)
    {
        if (elementos[i] > NUMERO)
        {
            mayor_50 ++;
        }
    }
    return mayor_50;
}

int menor_50(int elementos[8])
{
    printf("\n<< COMPONENTES MENORES A 50 >>.");
    int menor_50 = 0;
    // SE DEFINEN DOS CONSTANTES SIMBÓLICAS PARA EVITAR LOS NÚMEROS MÁGICOS.
    const int NUMERO = 50;
    const int VECTOR = 8;
    for (int i = 0; i < VECTOR; i ++)
    {
        if (elementos[i] < NUMERO)
        {
            menor_50 ++;
        }
    }
    return menor_50;
}
void titulo()
{
    printf("*************************************************\n");
    printf("\t<< PROGRAMA QUE ADMINISTRA\n \t\t8 ELEMENTOS >>\n");
    printf("*************************************************");
}

void autor()
{
    printf("\n*************************************************\n");
    printf("<< PROGRAMA DESARROLLADO POR WALTER SANTILLAN >>\n");
    printf("*************************************************");
}
