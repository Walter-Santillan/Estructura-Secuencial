#include<stdio.h>
#include<conio.h>
/*Realizar un programa que lea cuatro valores numericos e informar
su suma y promedio*/

int main(){
    printf("######################################################\n");
    printf("\tDesarrollado por Walter Santillan\n");
    printf("######################################################\n");

    float num1, num2, num3, num4, suma, promedio;

    /*INGRESO DE DATOS*/
    printf("Ingresar el primer valor: ");
    scanf("%f", &num1);
    printf("Ingresar el segundo valor: ");
    scanf("%f", &num2);
    printf("Ingresar el tercer valor: ");
    scanf("%f", &num3);
    printf("Ingresar el cuarto valor: ");
    scanf("%f", &num4);

    /*OPERACION*/
    suma =num1 + num2 + num3 + num4;
    promedio = suma / 4;

    /*SALIDA: MOSTRAR MENSAJE*/
    printf("La suma total es: %.2f",suma);
    printf("\n");
    printf("El promedio es: %.2f",promedio);

    getch();
    return 0;

}
