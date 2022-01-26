#include<stdio.h>
#include<conio.h>
/*Se ingresan tres notas de un alummno, si el promedio es mayor igual a siete,
mostrar un mensaje de promocionado*/

int main(){
    float nota1,nota2,nota3, promedio;

    printf("Ingresar la primera nota: ");
    scanf("%f", &nota1);
    printf("Ingresar la segunda nota: ");
    scanf("%f", &nota2);
    printf("Ingresar la tercera nota: ");
    scanf("%f", &nota3);

    promedio=(nota1+nota2+nota3)/3;

    if (promedio>=7){
        printf("El o la estudiante esta promocionado/a");
    } else{
        printf("El o la estudiante no esta promocionado/a");
    }
    getch();
    return 0;
}
