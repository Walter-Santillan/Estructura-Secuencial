#include<stdio.h>
#include<conio.h>
/*Confeccionar un programa que lea n pares de datos, cada par de datos corresponde
a la medida de la base y la altura de un triángulo. El programa deberá informar:
    a)De cada triángulo la medida de su base, su altura y su superficie.
    b)La cantidad de triángulos cuya superficie es mayor a 12. */

int main()
{
    int n,base,altura,superficie,cantidad,numeros;
    cantidad=0;

    printf("Cuantos triangulos procesara: ");
    scanf("%i",&n);

    for(numeros=1;numeros<=n;numeros++)
    {
        printf("Ingresar la medida de la base: ");
        scanf("%i",&base);
        printf("Ingresar la medida de la altura: ");
        scanf("%i",&altura);

        superficie = base*altura/2;
        printf("La superficie es: %i",superficie);
        printf("\n");

        if(superficie>12)
        {
            cantidad++;
        }

    }
    printf("La cantidad de triangulos con superficie mayor a 12 es: %i",cantidad);
    getch();
    return 0;
}
