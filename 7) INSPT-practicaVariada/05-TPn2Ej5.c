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
    if (edad >= 1 && edad <= 120){
        if (genero == 'F' || genero == 'M' || genero == 'f' || genero == 'm'){
            if (edad >= 65 || (genero == 'F' && edad >= 60)){
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
