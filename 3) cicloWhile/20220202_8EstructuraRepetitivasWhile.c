#include<stdio.h>
#include<conio.h>

/*Realizar un programa que imprima en pantalla los números del 1 al 100.*/

int main(){
    int num;
    num = 1; //INICIALIZO
    printf("#######################################################\n");
    printf("\tDesarrollado por Walter Santillan\n");
    printf("#######################################################\n");
    while (num <= 100){
        printf("%i-",num);
        num = num + 1;
    }
    getch();
    return 0;
}
