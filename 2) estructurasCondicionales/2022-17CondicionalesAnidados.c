#include<stdio.h>
#include<conio.h>
/*Se ingresa por teclado un valor entero, mostrar una leyenda que indique si el numero
es positivo, negativo o nulo*/

int main(){
    int num;

    printf("Ingresar un valor entero: ");
    scanf("%i", &num);

    if (num == 0){
        printf("El valor es nulo");
    }
    else {
        if (num > 0){
            printf("El valor es positivo");
        } else{
            printf("El valor es negativo");
        }

    }
    getch();
    return 0;
}
