#include<stdio.h>
#include<conio.h>
/*Realizar un programa que pida cargar una fecha cualquiera, luego verificar si dicha fecha corresponde a Navidad.*/

int main(){
    int dia, mes, ano;

    printf("Ingrese el dia: ");
    scanf("%i", &dia);
    printf("Ingrese el mes: ");
    scanf("%i", &mes);
    printf("Ingrese al año: ");
    scanf("%i", &ano);

    if(dia==25 && mes==12){
        printf("La fecha ingresada corresponde a Navidad");
    } else{
        printf("La fecha ingresada no corresponde a Navidad");
    }
    getch();
    return 0;
}
