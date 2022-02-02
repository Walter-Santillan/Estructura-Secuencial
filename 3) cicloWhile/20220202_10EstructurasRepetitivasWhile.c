#include<stdio.h>
#include<conio.h>
/*Realizar un programa que permita cargar dos listas de 15 valores cada una.
Informar con un mensaje cual de las dos listas tiene un valor acumulado mayor
(mensajes "Lista 1 mayor", "Lista 2 mayor", "Listas iguales")
Tener en cuenta que puede haber dos o más estructuras repetitivas en un algoritmo.*/

int main(){
    int x, valor, suma1, suma2;

    suma1 = 0;
    suma2 = 0;
    x = 1;

    printf("#######################################################\n");
    printf("\tDesarrollado por Walter Santillan\n");
    printf("#######################################################\n");

    printf("Primer lista");
    printf("\n");

    while(x <= 15){
        printf("Ingrese un valor: ");
        scanf("%i",&valor);
        suma1 = suma1 + valor;
        x = x + 1;
    }
    printf("Segunda lista");
    printf("\n");
    x = 1;
    while(x <= 15){
        printf("Ingrese un valor: ");
        scanf("%i",&valor);
        suma2 = suma2 + valor;
        x = x + 1;
    }
    if(suma1 > suma2){
        printf("Lista 1 mayor");
    }else{
        if(suma2 > suma1){
            printf("Lista 2 mayor");
        }else{
            printf("Listas igulaes");
        }
    }
    getch();
    return 0;
}
