#include<stdio.h>
#include<conio.h>
/*Confeccionar un programa que pida por teclado tres notas de un alumnno,
calcule el promedio e imprima por consola algunos de estos tres mensajes*/

int main(){
    float nota1,nota2,nota3,promedio;
    /*INGRESO DE DATOS*/
    printf("Ingresar la primera nota: ");
    scanf("%f", &nota1);
    printf("Ingresar la segunda nota: ");
    scanf("%f", &nota2);
    printf("Ingresar la tercera nota: ");
    scanf("%f", &nota3);
    /*OPERACION*/
    promedio=(nota1+nota2+nota3)/3;
    /*MOSTRAR MENSAJE*/
    if (promedio >= 7){
        printf("El o la estudiante esta promocionado/a");
    }
    else{
        if (promedio >= 4){
            printf("El o la estudiante esta aprobado/a debe rendir final");
        }
        else{
            printf("El o la estudiante esta reprobado/a debe recursar");
        }
    }
    getch();
    return 0;
}
