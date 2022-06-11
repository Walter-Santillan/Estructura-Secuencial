#include <stdio.h>

/*
5)Realizá un programa que permita al usuario ingresar su edad (entre 1 y 120 años) y su género
('F' para mujeres, 'M' para hombres).
La computadora debe indicar si la persona está en edad de jubilarse.
En caso de haber ingresado valores erróneos (edad fuera de rango o género inválido),
informar tal situación.
*/

int main()
{
    printf("\t<< PROGRAMA QUE VALIDA DATOS >>");
    // DECLARO LAS VARIABLES A UTILIZAR, CON SUS RESPECTIVOS TIPOS.
    const char FEMENINO = 'F';
    const char femenino = 'f';
    const char MASCULINO = 'M';
    const char masculino = 'm';
    const int EDAD_1 = 60;
    const int EDAD_2 = 65;
    const int EDAD_MIN = 1;
    const int EDAD_MAX = 120;

    int edad;
    char genero;
    // INGRESO DE DATOS.
    printf("\nIngresar edad: ");
    scanf("%d", & edad);
    fflush(stdin);
    printf("Ingresar genero < F o M >: ");
    scanf("%c", & genero);

    // PROCESO DE DATOS. VALIDACIÓN DE LOS MISMOS.
    // PREGUNTA: ¿CUÁNDO LOS DATOS SON VÁLIDOS?
    if (edad >= EDAD_MIN && edad <= EDAD_MAX){
        if (genero == FEMENINO || genero == MASCULINO || genero == femenino || genero == masculino){
            if (edad >= EDAD_2|| (genero == femenino || genero == FEMENINO) && edad >= EDAD_1){
                printf("\nSe jubila\n");
            }else{
                printf("\nNo se jubila\n");
            }
        }
    }else
    {
        printf("\nLa edad es invalida!!!.\n Intente nuevamente \n");
    }
    return 0;
}
