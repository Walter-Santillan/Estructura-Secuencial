#include <stdio.h>
#include <conio.h>

/*
Guardar los datos de 6 sueldos de empleados en un vector de tipo float.
Confeccionar las siguientes funciones:
1-Carga de sueldos.
2-Impresión de los sueldos.
3-Gasto total de la empresa en sueldos.
*/

int main() {
    // EN LA FUNCIÓN main SE LLAMA A LAS FUNCIÓNES CREADAS.
    float vec[6];

    cargaSueldos(vec);
    imprimirSueldos(vec);
    gastoTotal(vec);

    getch();
    return 0;
}

// ESTA FUNCIÓN PERMITE INGRESAR 6 SUELDOS.
void cargaSueldos(float vec[6])
{
    for (int i = 0; i < 6; i ++) // ciclo.
    {
        printf("Ingresar sueldos de los empleados: ");
        scanf("%f", & vec[i]);
    }
}

// LA FUNCIÓN IMPRIMIR MUESTRA LOS SUELDOS INGRESADOS.
void imprimirSueldos(float vec[6])
{
    printf("\n"); // es un salto de linea.
    printf("\t<< LISTADOS DE SUELDOS. >>\n"); // título.

    for (int i = 0; i < 6; i ++) // ciclo que recorre 6 elementos.
    {
        printf("%.2f\n", vec[i]);
    }
}

// LA FUNCIÓN "gastoTotal" SUMA TODOS LOS SUELDOS INGRESADOS.
void gastoTotal(float vec[6])
{
    printf("\n");
    printf("\t<< GASTO TOTAL EN SUELDOS. >>");
    float suma = 0;
    for (int i = 0; i < 6; i ++)
    {
        suma = suma + vec[i];
    }
    printf("\nEl gasto total en sueldos es: %.2f\n", suma);
}
