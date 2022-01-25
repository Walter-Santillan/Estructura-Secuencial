#include<stdio.h>
#include<conio.h>
/*Realizar la carga de dos numeros enteros por teclado e impromir su suma y su producto*/

int main(){
    printf("######################################################\n");
    printf("\tDesarrollado por Walter Santillan\n");
    printf("######################################################\n");

    int num1, num2, suma, producto;

    printf("\nIngresar el primer valor: ");
    scanf("%i", &num1);
    printf("\nIngresar el segundo valor: ");
    scanf("%i", &num2);

    suma = num1 + num2;
    producto = num1 * num2;

    printf("\nLa suma de los dos valores es: ");
    printf("%i", suma);
    printf("\n");
    printf("\nEl producto de los dos valores es: ");
    printf("%i", producto);

    getch();
    return 0;
}
