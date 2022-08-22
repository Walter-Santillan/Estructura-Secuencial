#include <stdio.h>

/*
Confeccionar un programa que permita ingresar una palabra y luego muestre
un mensaje si la misma comienza con la vocal 'A' o 'a'.
*/

int main() {
    char palabra[50];

    printf("Ingresar una palabra: ");
    gets(palabra);

    if (palabra[0] == 'a' || palabra[0] == 'A') {
        printf("\nLa palabra comienza con la vocal a o A\n");
    } else
    {
        printf("\nLa palabara no comineza con la vocal a o A\n");
    }
    getch();
    return 0;
}
