#include <stdio.h>

int main()
{
    printf("\t<< PROGRAMA EJECUTA 6 VECES LA VARIABLE a. >>\n");
    // EL PROGRAMA MUESTRA EL VALOR DE LA VARIABLE a 6 VECES.
    // DECLARO LAS VARIABLES A UTILIZAR.
    int a, maximo;
    a = 0; //
    maximo = 5;
    // INICIA EL CICLO.
    while (a <= maximo)
    {
        // INICIA EL BLOQUE DE INSTRUCCIONES.
        printf("\n*Variable a = %d\n", a);
        a ++;
    }
    return 0;
}
