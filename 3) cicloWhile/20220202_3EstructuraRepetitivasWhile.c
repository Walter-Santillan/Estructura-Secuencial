#include<stdio.h>
#include<conio.h>

/*Desarrollar un programa que permita la carga de 10 valores por teclado y
nos muestre posteriormente la suma de los valores ingresados y su promedio.*/

int main(){
    float x, valor, suma, promedio;

    x = 1;
    suma = 0;
    printf("#######################################################\n");
    printf("\tDesarrollado por Walter Santillan\n");
    printf("#######################################################\n");

    while(x <= 10){
        printf("\nIngrese un valor: ");
        scanf("%f",&valor);
        suma = suma + valor;
        x = x + 1;
        //promedio = suma/10;
    }
    promedio = suma/10;
    printf("\nLa suma de los valores es: %.2f",suma);
    printf("\n************************************");
    printf("\nEl promedio es: %.2f",promedio);
    printf("\n************************************");

    getch();
    return 0;
}
