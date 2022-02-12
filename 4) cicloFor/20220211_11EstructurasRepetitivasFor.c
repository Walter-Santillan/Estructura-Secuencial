#include<stdio.h>
#include<conio.h>
/*Escribir un programa que pida ingresar coordenadas (x,y) que representan puntos en el plano.
Informar cuántos puntos se han ingresado en el primer, segundo, tercer y cuarto cuadrante.
Al comenzar el programa se pide que se ingrese la cantidad de puntos a procesar.*/

int main()
{
    int n,f,x,y,cont1,cont2,cont3,cont4;
    cont1=0;
    cont2=0;
    cont3=0;
    cont4=0;
    printf("Ingresar la cantidad de puntos a procesar: ");
    scanf("%i",&n);

    for(f=1;f<=n;f++)
    {
        printf("Ingresar la coordenada x: ");
        scanf("%i",&x);
        printf("Ingresar la coordenada y: ");
        scanf("%i",&y);

        if(x>0 && y>0)
        {
            cont1++;
        }
        else
        {
            if (x<0 && y>0)
            {
                cont2++;
            }
            else
            {
                if (x<0 && y<0)
                {
                    cont3++;
                }
                else
                {
                    if (x>0 && y<0)
                    {
                        cont4++;
                    }
                }
            }
        }
    }
    printf("Cantidad de puntos del primer cuadrante %i",cont1++);
    printf("\n");
    printf("Cantidad de puntos del segundo cuadrante %i",cont2++);
    printf("\n");
    printf("Cantidad de puntos del tercer cuadrante %i",cont3++);
    printf("\n");
    printf("Cantidad de puntos del cuarto cuadrante %i",cont4++);
    printf("\n");
}

