#include<stdio.h>
#include<conio.h>

/*Se ingresa por teclado un numero positivo de uno o dos digitos,
mostrar un mensaje indicando si el numero tiene uno o dos digitos*/

int main(){
    int valor;

    printf("Ingresar un numero entre 1 - 99: ");
    scanf("%i", &valor);

    if (valor >= 10){
        printf("El numero tiene dos digitos");
    }else {
        printf("El numero tiene un digito");
    }
    getch();
    return 0;
}
