#include<stdio.h>

int main() {
    char letra[40];

    printf("\nIngresar nombre: ");
    scanf("%s", letra);

    printf("\nHola, %s. Tu inicial es %c\n", letra, letra[0]);

    return 0;
}
