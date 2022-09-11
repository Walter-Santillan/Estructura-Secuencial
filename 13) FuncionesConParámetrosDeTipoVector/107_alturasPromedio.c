#include <stdio.h>
#include <conio.h>

/*
Definir un vector de 5 componentes de tipo float en la función main que representen
las alturas de 5 personas.
Desarrollar las siguientes funciones:
1-Carga del vector.
2-Retornar el promedio del vector.
"float calcularPromedio(float alturas[5])".
3-Contar y luego imprimir cuántas personas son más altas que el promedio y cuántas más
bajas.
void altasBajas(float alturas[5],float pro).
*/

float calcularPromedio(float alturas[5]);
void vectorAlturas(float alturas[5]);
void altasBajas(float alturas[5], float pro);

int main()
{
    titulo(); // FUNCIÓN QUE DEFINE EL TITULO.
    // SE DEFINE UN VECTOR DE 5 COMPONENTES TIPO FLOAT.
    float alturas[5];
    float prom;

    // LLAMA A LAS FUNCIONES.
    vectorAlturas(alturas);
    prom = calcularPromedio(alturas);
    printf("\nEl promedio es: %.2f\n", prom);
    altasBajas(alturas, prom);

    autor(); // FUNCIÓN QUE DEFINE EL NOMBRE DEL AUTOR.

    getch();
    return 0;
}

void vectorAlturas(float alturas[5])
{
    printf("\nALTURAS.\n");
    for (int i = 0; i < 5; i ++) {
        printf("Ingresar las alturas: ");
        scanf("%f", & alturas[i]);
    }
}

float calcularPromedio(float alturas[5])
{
    float suma = 0;

    for (int i = 0; i < 5; i ++) {
        suma = suma + alturas[i];
    }
    printf("\nLa suma de las alturas es: %.2f\n", suma);
    printf("\nPROMEDIO.");
    float promedio = suma / 5;

    return promedio;
}

// Contar y luego imprimir cuántas personas son más altas que el promedio y cuántas más
// bajas.
void altasBajas(float alturas[5], float pro)
{
    int cantAltas = 0;
    int cantBajas = 0;
    for (int i = 0; i < 5; i ++)
    {
        if (alturas[i] > pro)
        {
            cantAltas ++;
        } else
        {
            if (alturas[i] < pro)
            {
                cantBajas ++;
            }
        }
    }

    printf("\nLa cantidad de personas mas altas que el promedio es: %d", cantAltas);
    printf("\nLa cantidad de personas mas bajas que el promedio es: %d\n", cantBajas);
}

void titulo()
{
    printf("*************************************************\n");
    printf("\t<< PROGRAMA QUE CALCULA SUELDOS >>\n");
    printf("*************************************************");
}

void autor()
{
    printf("\n*************************************************\n");
    printf("<< PROGRAMA DESARROLLADO POR WALTER SANTILLAN >>\n");
    printf("*************************************************\n");
}
