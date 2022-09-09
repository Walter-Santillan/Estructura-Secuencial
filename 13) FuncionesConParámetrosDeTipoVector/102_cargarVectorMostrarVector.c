#include <stdio.h>
#include <conio.h>

/*
Confeccionar un programa que defina dos funciones, una que permita cargar un vector de 5
elementos enteros y otra que muestre un vector de 5 elementos enteros.
En la función main definir una variable de tipo vector y seguidamente llamar a las dos funciones.
*/

// DEFINIMOS UNA FUNCIÓN CON UN VECTOR COMPUESTO POR CINCO ELEMENTOS.
void cargaVector(int vec[5])
{
    printf("\nSe cargan los elementos.\n");
    for (int x = 0; x < 5; x ++) {
        printf("Ingresar elemento: ");
        scanf("%d", & vec[x]);
    }
}

// EN ESTA FUNCIÓN MOSTRAMOS EL VECTOR DE CINCO ELEMENTOS.
void mostrarVector(int vec[5])
{
    printf("\nSe muestra el contenido del vector.\n");
    for (int x = 0; x < 5; x ++) {
        printf("%d - ", vec[x]);
    }
    printf("\n");
}

int main() {
    int vector[5];
    cargaVector(vector);
    mostrarVector(vector);

    getch();
    return 0;
}
