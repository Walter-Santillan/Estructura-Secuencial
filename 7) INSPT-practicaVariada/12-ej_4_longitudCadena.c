#include <stdio.h>
#include <string.h>

int main(){
    char texto[40];

    printf("\nIngresar una palabra: ");
    scanf("%s", texto);

    //%d CUENTA LA CANTIDAD DE LETRAS CON STRLEN.
    printf("\nHas tecleado %d letras\n", strlen(texto));

    return 0;
}
