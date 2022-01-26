#include<stdio.h>
#include<conio.h>
/*Se ingresan tres valores por teclado, si todos son iguales se imprime la suma del primero
con el segundo y a este resultado se lo multiplica por el tercero.*/

int main(){
    int num1,num2,num3,suma,producto;

    printf("Ingresar el primer numero: ");
    scanf("%i", &num1);
    printf("Ingresar el segundo numero: ");
    scanf("%i",&num2);
    printf("Ingresar el tercer numero: ");
    scanf("%i",&num3);

    if (num1==num2 && num1==num3){
        suma=num1+num2;
        printf("\nLa suma del primer y el segundo numero es: %i", suma);
        printf("\n");
        producto=suma*num3;
        printf("\nLa suma del primer numero y el segundo numero multiplicado por el tercer numero es: %i", producto);
    }else {
        printf("\nDatos erroneos");
    }
    getch();
    return 0;
}
