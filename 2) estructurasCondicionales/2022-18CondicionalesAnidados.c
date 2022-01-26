#include<stdio.h>
#include<conio.h>
/*Confeccionar un programa que permita cargar un numero entero positivo de hasta tres
cifras y muestre un mensaje indicando si tiene 1,2 y 3 cifras. Mostrar un mensaje de
error si el numero de cifras es mayor a tres*/

int main(){
    int num;

    printf("Ingresar un numero entero y positivo: ");
    scanf("%i",&num);

    if (num < 10){
        printf("\nEl numero es de una cifra");
    } else{
        if (num < 100){
            printf("\nEl numero tiene dos cifras");
        }else {
            if (num < 1000){
                printf("\nEl numero tiene tres cifras");
            } else {
                printf("\nnumero fuera de rango, vuelva a intentar");
            }
        }
    }
    getch();
    return 0;
}
