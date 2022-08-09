#include <stdio.h>

/*
Confeccionar un programa que permita la carga de valores enteros por teclado. Luego
de ingresar el valor mostrar un mensaje por pantalla que pida confirmar al usuario si
desea cargar otro valor ingresando los caracteres 's' o 'n'. Mostrar al final la suma de los
valores ingresados.
*/

int main() {
    int valor;
    float suma = 0;
    char confirma;

    do{
        printf("\nIngresar un valor entero: ");
        scanf("%d", & valor);

        suma = suma + valor;

        printf("¿Desea ingresar otro valor? ingresar [s/n] para confirmar: ");
        scanf(" %c", & confirma);

    } while(confirma == 's');
    printf("\nLa suma de los valores ingresados es: %.2f\n", suma);

    getch();
    return 0;
}
