#include<stdio.h>
#include<conio.h>
/*Una planta que fabrica perfiles de hierro posee un lote de n piezas.
Confeccionar un programa que pida ingresar por teclado la cantidad de piezas a procesar
y luego ingrese la longitud de cada perfil; sabiendo que la pieza cuya longitud esté
comprendida en el rango de 1.20 y 1.30 son aptas. Imprimir por pantalla la cantidad
de piezas aptas que hay en el lote.
*/

int main(){
    int n, x, cant;
    float largo;
    printf("#######################################################\n");
    printf("\tDesarrollado por Walter Santillan\n");
    printf("#######################################################\n");

    x = 1; //Cuenta la cantidad de piezas cargadas hasta el momento
    cant = 0; // Cuenta los perfiles de hierro aptos
    printf("\nIngresar la cantidad de piezas a procesar: ");
    scanf("%i", &n);

    while(x <= n){
        printf("Ingrese la medida de las piezas: ");
        scanf("%f",&largo);
        if (largo >= 1.20 && largo <= 1.30){
                cant = cant + 1;
        }
        x = x + 1;
    }
    printf("La cantidad de piezas aptas son: %i", cant);
    getch();
    return 0;
}
