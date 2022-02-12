#include<stdio.h>
#include<conio.h>

/*Desarrollar un programa que permita la carga de 10 valores por teclado y nos muestre
posteriormente la suma de los valores ingresados y su promedio. Este problema
ya lo desarrollamos empleando el while, lo resolveremos empleando la estructura for.*/

int main(){
    int num,valor,suma,promedio;
    suma=0;

    for(num=1;num<=10;num++){
        printf("Ingrese un valor: ");
        scanf("%i",&valor);
        suma=suma+valor;
    }
    promedio=suma/10;
    printf("La suma de los valores son: %i",suma);
    printf("\n");
    printf("El promedio de los valores es : %i",promedio);

    getch();
    return 0;
}
