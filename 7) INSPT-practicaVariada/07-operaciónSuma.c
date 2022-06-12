#include <stdio.h>

/*Operaci�n suma*/

int main()
{
    presentacion();
    int num_1;
    int num_2;
    int resultado;

    printf("\nIngresar el primer numero: ");
    scanf("%d", & num_1);
    printf("Ingresar el segundo numero: ");
    scanf("%d", & num_2);

    // LLAMAR A LA FUNCI�N SUMA.
    resultado = operacionSuma(num_1, num_2);

    // IMPRIMIR POR PANTALLA.
    imprimirResultado(resultado);

    return 0;
}

// ELABORAR LA FUNCI�N SUMA.
int operacionSuma(int a, int b)
{
    int resultado;
    resultado = a + b;

    return (resultado);
}

void imprimirResultado(int x)
{
    printf("\nEl resultado de la suma es: %d\n", x);
}

void presentacion()
{
    printf("********************************************************************\n");
    printf("\t<< Usando funciones para sumar dos numeros enteros. >>\n");
    printf("********************************************************************\n");
}
