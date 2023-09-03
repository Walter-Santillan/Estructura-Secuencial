#include <stdio.h>

int main()
{
    int v1 = 22;
    int v2 = 81;

    int *puntero; // SE DEFINE UNA VARIABLE DE TIPO PUNTERO.

    puntero = &v1; // LA VARIABLE pe -> ALMACENA LA DIRECCIÓN DE MEMORIA DE v1.
    printf("\nLo apuntado por puntero es: %d\n", *puntero);
    printf("La direccion que almacena puntero es: %p\n", puntero);

    puntero = &v2;
    printf("\nLo apuntado por puntero es: %d\n", *puntero);
    printf("La direccion que almacena puntero es: %p\n", puntero);

    return 0;
}
