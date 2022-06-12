#include <stdio.h>

/*operación resta de dos valores utilizando funciones.*/


int main()
{
    presentacion(); // ES UNA FUNCIÓN LLAMADA PRESENTACIÓN
    // DECLARAR LAS VARIABLES.
    int num_1;
    int num_2;
    int respuesta;

    // INGRESAR LOS DATOS.
    printf("\nIngresar el primer numero: ");
    scanf("%d", & num_1);
    printf("Ingresar el segundo numero: ");
    scanf("%d", & num_2);

    // LLAMAR A LA FUNCIÓN RESTA.
    respuesta = resta(num_1, num_2);

    // IMPRIMIR POR PANTALLA EL RESULTADO.
    imprimirResultado (respuesta);


    return 0;
}

int resta(int a, int b) // a y b toma el parámetro num_1 y num_2.
{
    int resultado;
    resultado = a - b;

    return (resultado);
}

void imprimirResultado(int x)
{
    printf("\nEl resultado de operacion es: %d\n", x);
}

void presentacion()
{
    printf("*************************************************\n");
    printf("\t<< Usando funciones para restar >>\n");
    printf("*************************************************\n");
}
