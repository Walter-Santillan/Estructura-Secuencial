#include<stdio.h>
#include<conio.h>
/*Escribir un programa que solicite la carga de un valor positivo
y nos muestre desde 1 hasta el valor ingresado por teclado de uno en uno.*/

 int main(){
    int n, x;
    printf("#######################################################\n");
    printf("\tDesarrollado por Walter Santillan\n");
    printf("#######################################################\n");

    printf("\nIngrese un valor final: ");
    scanf("%i",&n);

    x = 1;

    while(x <= n){
        printf("%i", x);
        printf("\n");

        x = x + 1;
    }
    getch();
    return 0;
 }
