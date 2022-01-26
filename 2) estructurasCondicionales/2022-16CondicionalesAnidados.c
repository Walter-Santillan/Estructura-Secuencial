#include<stdio.h>
#include<conio.h>
/*Se carga por teclado tres valores distintos. Mostrar por pantalla el mayor de ellos*/

int main(){
    int valor1,valor2,valor3;

    printf("Ingresar el primer valor: ");
    scanf("%i", &valor1);
    printf("Ingresar el segundo valor: ");
    scanf("%i", &valor2);
    printf("Ingresar el tercer valor: ");
    scanf("%i", &valor3);

    if (valor1 > valor2){ /*Si es verdadero pasa al if*/
        if (valor1 > valor3){
            printf("\nEl primer valor es el mayor");
        }else{
            printf("\nEl segundo valor es el mayor");
        }
    }else{
        if(valor2 > valor3){
            printf("\nEl segundo valor es el mayor");
        }else {
            printf("\nEl tercer valor es el mayor");
        }
    }
    getch();
    return 0;
}
