#include<stdio.h>
#include<conio.h>
/*Desarrollar un programa que permita cargar n números enteros y luego nos informe
cuántos valores fueron pares y cuántos impares.
Emplear el operador “%” en la condición de la estructura condicional
(este operador retorna el resto de la división de dos valores, por ejemplo 11%2 retorna un 1):
*/

int main(){
    int n,x,valor,pares,impares;
    pares = 0;
    impares = 0;
    x = 1;

    printf("#######################################################\n");
    printf("\tDesarrollado por Walter Santillan\n");
    printf("#######################################################\n");

    printf("Cuantos valores Ingresara: ");
    scanf("%i",&n);

    while(x <= n){
        printf("Ingrese un valor: ");
        scanf("%i",&valor);
        if(valor%2 == 0){
            pares = pares + 1;
        }else{
            impares = impares + 1;
        }
        x = x + 1;
    }
    printf("\nCantidad de pares %i",pares);
    printf("\n###################################");
    printf("\nCantidad de impares %i",impares);

    getch();
    return 0;
}

