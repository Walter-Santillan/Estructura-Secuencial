#include<stdio.h>
#include<conio.h>
/*Se ingresan un conjunto de n alturas de personas por teclado. Mostrar la altura promedio de las personas.*/

int main(){
    float altura, promedio, suma;
    int n, x;
    suma = 0;
    x = 1;

    printf("#######################################################\n");
    printf("\tDesarrollado por Walter Santillan\n");
    printf("#######################################################\n");

    printf("\nCuantas personas hay: ");
    scanf("%i",&n);

    while(x <= n){
        printf("Ingresar la altura: ");
        scanf("%f",&altura);
        suma = suma + altura;
        x = x + 1;
    }
    promedio = suma/n;
    printf("\nLa altura promedio es: %.2f",promedio);
    getch();
    return 0;
}
