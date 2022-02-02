#include<stdio.h>
#include<conio.h>
/*Mostrar todos los múltiplos de 8 que hay hasta el valor 500.
Debe aparecer en pantalla 8 - 16 - 24, etc.*/

int main(){
    int multiplo = 8;

    printf("#######################################################\n");
    printf("\tDesarrollado por Walter Santillan\n");
    printf("#######################################################\n");

    while(multiplo <= 500){
        printf("%i-",multiplo);
        //printf("\n");
        multiplo = multiplo + 8;
    }
    getch();
    return 0;
}
