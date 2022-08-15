#include <stdio.h>

/*
Confeccionar un programa que solicite la carga de dos valores por teclado.
Luego solicitar que se cargue alguno de los caracteres: '+', '-', '*' o '/'.
Según el caracter ingresado proceder a mostrar la sumar, resta, multiplicación o división
de los valores ingresados.
*/

int main() {
    float val_1;
    float val_2;
    char calculo;
    printf("*******************************************************\n");
    printf("\t<< PROGRAMA QUE CALCULA [+, -, *, /] >>");
    printf("\n*******************************************************\n");
    printf("\nIngresar el primer valor: ");
    scanf("%f", & val_1);
    printf("Ingresar el segundo valor: ");
    scanf("%f", & val_2);

    printf("Ingresar los caracteres [+, -, *, /] para realizar la operacion: ");
    scanf(" %c", & calculo);

    if (calculo == '+') {
        float suma = val_1 + val_2;
        printf("\nLa suma de los valores ingresados es: %.2f\n", suma);
    } else
    {
        if (calculo == '-') {
            float resta = val_1 - val_2;
            printf("\nLa resta de los valores ingresados es: %.2f\n", resta);
        } else
        {
            if (calculo == '*') {
                float producto = val_1 * val_2;
                printf("\nEl producto de los valores ingresados es: %.2f\n", producto);
            } else
            {
                if (calculo == '/') {
                    float division = val_1 / val_2;
                    printf("\nLa division de los valores ingresados es: %.2f\n", division);
                }
            }
        }
    }
    printf("\n*******************************************************\n");
    printf("*******************************************************\n");
    printf("<< PROGRAMA DESARROLLADO POR WALTER SANTILLAN >>");
    printf("\n*******************************************************\n");
    printf("*******************************************************\n");
    getch();
    return 0;
}
