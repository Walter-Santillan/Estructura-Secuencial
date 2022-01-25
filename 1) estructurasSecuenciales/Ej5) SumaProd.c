#include<stdio.h>
#include<conio.h>
/*Escribir un programa en el cual se ingresan cuatro valores
calcular e informar la suma de los dos primeros  y el producto del
tercero y el cuarto valor*/

int main(){
    printf("######################################################\n");
    printf("\tDesarrollado por Walter Santillan\n");
    printf("######################################################\n");

    int num1, num2, num3, num4, suma, producto;

    /*INGRESO DE DATOS*/
    printf("Escribir un programa en el cual se ingresan cuatro valores.\n");
    printf("Calcular e informar la suma de los dos primeros y el producto del tercero y el cuarto valor.\n");
    printf("\n");
    printf("Ingrese el primer valor: ");
    scanf("%i", &num1);
    printf("Ingrese el segundo valor: ");
    scanf("%i", &num2);
    printf("\n");
    printf("Ingrese el tercer valor: ");
    scanf("%i", &num3);
    printf("Ingrese el cuarto valor: ");
    scanf("%i", &num4);

    /*OPERACION*/
    suma = num1 + num2;
    producto = num3 * num4;

    /*SALIDA, MOSTRAR POR PANTALLA*/
    printf("La suma de los dos primeros numeros es: %i",suma);
    printf("\n");
    printf("El producto entre tercer numero y el cuarto numero es: %i",producto);

    getch();
    return 0;
}
