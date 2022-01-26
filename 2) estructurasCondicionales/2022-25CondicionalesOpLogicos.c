#include<stdio.h>
#include<conio.h>

/*Se ingresan por teclado tres números, si al menos uno de los valores ingresados es menor a 10,
imprimir en pantalla la leyenda "Alguno de los números es menor a diez".*/

int main(){
    int num1,num2,num3;

    printf("Ingresar el primer numero: ");
    scanf("%i", &num1);
    printf("Ingresar el segundo numero: ");
    scanf("%i", &num2);
    printf("Ingresar el tercer numero: ");
    scanf("%i", &num3);

    if (num1<10 || num2<10 || num3<10){
        printf("Algunos de los valores es menor a diez");
    } else{
        printf("Los datos son erroneos");
    }
    getch();
    return 0;
}
