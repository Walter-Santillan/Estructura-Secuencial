#include <stdio.h>
#include <conio.h>

/*
Definir tres vectores de tipo entero. Realizar la carga de los dos primeros por teclado.
Definir una única función que realice la carga de un vector y llamar a dicha función
dos veces pasando el primer y segundo vector definido.
Plantear otra función que reciba tres vectores y proceda a sumar elemento a elementos
los dos primeros vectores y se carguen en el tercer vector.
Imprimir los tres vectores.
*/

int main() {
    // SE DEFINEN TRES VECTORES DE 6 ELEMENTOS CADA UNO.
    int vector_1[6];
    int vector_2[6];
    int vectorSuma[6];

    // LLAMADA DE LAS FUNCIONES
    cargarVector(vector_1);
    cargarVector(vector_2);
    tercerVector(vector_1, vector_2, vectorSuma);
    imprimeVector(vector_1);
    imprimeVector(vector_2);
    lineaSeparacion();
    imprimeVector(vectorSuma);

    getch();
    return 0;

}

void cargarVector(int vec_1[6])
{
    printf("\tIngreso de elementos.\n");
    for (int i = 0; i < 6; i ++) {
        printf("Ingresar elementos: ");
        scanf("%d", & vec_1[i]);
    }
}

void tercerVector(int vec_1[6], int vec_2[6], int sumarVector[6])
{
    for (int x = 0; x < 6; x ++) {
        sumarVector[x] = vec_1[x] + vec_2[x];
    }
}

void imprimeVector (int vec[6])
{
    printf("\nImprime vector: ");
    for (int x = 0; x < 6; x ++) {
        printf("%d - ", vec[x]);
    }
    printf("\n");
}

// ESTA LINEA SEPARA EL VECTOR SUPERIOR DEL INFERIOR.
void lineaSeparacion()
{
    printf("-------------------------------------------\n");
}
