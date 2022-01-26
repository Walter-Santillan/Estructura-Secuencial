#include<stdio.h>
#include<conio.h>

/*Se ingresan por teclado tres números, si todos los valores ingresados son menores a 10,
imprimir en pantalla la leyenda "Todos los números son menores a diez".*/

int main(){
    float num1,num2,num3;

    printf("Ingresar el primer numero: ");
    scanf("%f", &num1);
    printf("Ingresar el segundo numero: ");
    scanf("%f", &num2);
    printf("Ingresar el tercer numero: ");
    scanf("%f", &num3);

    if (num1<10 && num2<10 && num3<10){
        printf("\nTodos los numeros son menores a diez");
    }else{
        printf("\nNo son menores a diez");
    }
}
