#include<stdio.h>
#include<conio.h>
/*Confeccionar un programa que lea por teclado tres números distintos y nos muestre el mayor*/

int main(){
    int num1,num2,num3;

    printf("Ingrese el primer numero: ");
    scanf("%i", &num1);
    printf("Ingrese el segundo  numero: ");
    scanf("%i", &num2);
    printf("Ingrese el tercer numero: ");
    scanf("%i", &num3);

    if (num1>num2 && num1>num3){
        printf("El numero uno es el mayor: ");
    }else{
        if(num2>num3){
            printf("El numero 2 es el mayor: ");
        }else{
            printf("El numero 3 es el mayor");
        }
    }
    getch();
    return 0;
}
