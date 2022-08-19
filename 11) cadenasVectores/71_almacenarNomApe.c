#include <stdio.h>

/*
Definir una variable para almacenar el nombre y apellido del programador.
Mostrar dicho nombre por pantalla
*/

int main() {
    printf("**************************************************\n");
    printf("\t<< PROGRAMA QUE ALMACENA\n \tCARACTERES COMO CADENAS >>");
    printf("\n**************************************************\n");

    char programador[20] = "Best - Seller";
    printf("\nEl nombre del programador es: %s\n", programador);


    printf("\n**************************************************\n");
    printf("<< PROGRAMA DESARROLLADO POR WALTER SANTILLAN >>\n");
    printf("**************************************************\n");
    getch();
    return 0;
}
