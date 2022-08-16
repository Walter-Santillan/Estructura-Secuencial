#include <stdio.h>

/*
Realizar la carga de valores enteros por teclado y sumarlos. Cada vez que se carga un
valor pedir al operador (persona) que ingrese si quiere cargar otro valor ingresando una 's'
o 'S' (minúscula o mayúscula).
*/

int main() {
    int valores;
    int suma = 0;
    char operador;

    printf("************************************************************\n");
    printf("\t<< PROGRAMA CARGA DE VALORES POR TECLADO >>");
    printf("\n************************************************************\n");
    // CUANDO LA FINALIZACIÓN DEL PROGRAMA ESTÁ A CARGO DEL USUARIA/O,
    // ES CONVENIENTE UTILIZAR UN CICLO DO WHILE.
    do {
        printf("\nIngresar un valor entero: ");
        scanf("%d", & valores);
        suma = suma + valores;

        printf("Desea cargar otro valor [s/n]: ");
        scanf(" %c", & operador);

    } while (operador == 'S' || operador == 's');
    printf("\nLa suma de los valores ingresados es: %d\n", suma);

    printf("\n************************************************************\n");
    printf("<< PROGRAMA DESARROLLADO POR WALTER SANTILLAN >>");
    printf("\n************************************************************\n");

    getch();
    return 0;
}
