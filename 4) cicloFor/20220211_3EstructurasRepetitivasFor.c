#include<stdio.h>
#include<conio.h>
/*Escribir un programa que lea 10 notas de alumnos y nos informe cuántos tienen notas mayores o iguales a 7 y cuántos menores.*/

int main()
{
    int aprobados,reprobados,cantidadNotas,nota;
    aprobados=0;
    reprobados=0;

    for (cantidadNotas=1;cantidadNotas<=10;cantidadNotas++)
    {
        printf("Ingresar notas: ");
        scanf("%i",&nota);

        if (nota>=7)
        {
            aprobados++;
        }else
        {
            reprobados++;
        }
    }
    printf("------------------------------------------\n");
    printf("La cantidad de alumnos aprobados es: %i",aprobados);
    printf("\n");
    printf("La cantidad de alumnos reprobados es: %i",reprobados);

    getch();
    return 0;
}
