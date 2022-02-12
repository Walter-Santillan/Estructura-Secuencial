#include<stdio.h>
#include<conio.h>
/*Se cuenta con la siguiente información:
Las edades de 5 estudiantes del turno mañana.
Las edades de 6 estudiantes del turno tarde.
Las edades de 11 estudiantes del turno noche.
Las edades de cada estudiante deben ingresarse por teclado.
a) Obtener el promedio de las edades de cada turno (tres promedios)
b) Imprimir dichos promedios (promedio de cada turno)
c) Mostrar por pantalla un mensaje que indique cual de los tres turnos tiene un promedio de edades menor.*/

int main()
{
    int f,edad,promedioTM,promedioTT,promedioTN,suma1,suma2,suma3;
    suma1=0;
    suma2=0;
    suma3=0;

    for(f=1;f<=5;f++)
    {
        printf("Ingresar edades: ");
        scanf("%i",&edad);
        suma1=suma1+edad;
    }
    promedioTM=suma1/5;
    printf("El promedio de las edades del turno mañana es: %i",promedioTM);
    printf("\n");


    for(f=1;f<=6;f++)
    {
        printf("Ingresar edad: ");
        scanf("%i",&edad);
        suma2=suma2+edad;
    }
    promedioTT=suma2/6;
    printf("El promedio de las edades del turno tarde es: %i",promedioTT);
    printf("\n");


    for(f=1;f<=11;f++)
    {
        printf("Ingresar edad: ");
        scanf("%i",&edad);
        suma3=suma3+edad;
    }
    promedioTN=suma3/11;
    printf("El promedio de las edades del turno noche es: %i",promedioTN);
    printf("\n");

    if (promedioTM < promedioTT && promedioTM < promedioTN)
    {
        printf("El turno mañana tiene un promedio de edad menor");
    }
    else
    {
        if(promedioTT < promedioTN)
        {
            printf("El turno tarde tiene un promedio de edad menor");
        }
        else
        {
            printf("El turno noche tiene un promedio de edad menor");
        }
    }
    getch();
    return 0;
}
