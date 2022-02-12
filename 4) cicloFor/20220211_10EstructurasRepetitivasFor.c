#include<stdio.h>
#include<conio.h>
/*Realizar un programa que lea los lados de "n" triángulos, e informar:
    a) De cada uno de ellos, qué tipo de triángulo es:
equilátero (tres lados iguales), isósceles (dos lados iguales), o escaleno (ningún lado igual)
    b) Cantidad de triángulos de cada tipo.
    c) Tipo de triángulo que posee menor cantidad.*/

int main()
{
    int n,f,lado1,lado2,lado3,cont1,cont2,cont3;
    cont1=0;
    cont2=0;
    cont3=0;

    printf("Ingresar la cantidad de triangulos: ");
    scanf("%i",&n);

    //Punto A) Que tipo de triangulo es:
    for(f=1;f<=n;f++)
    {
        printf("Ingresar el lado 1: ");
        scanf("%i",&lado1);
        printf("Ingresar el lado 2: ");
        scanf("%i",&lado2);
        printf("Ingresar el lado 3: ");
        scanf("%i",&lado3);

        if (lado1==lado2 && lado1==lado3)
        {
            printf("El triangulo es equilatero");
            printf("\n");
            cont1++;
        }
        else
        {
            if (lado1==lado2 || lado1==lado3 || lado2==lado3)
            {
                printf("El triangulo es isosceles");
                printf("\n");
                cont2++;
            }
            else
            {
                printf("El triangulo es escaleno");
                printf("\n");
                cont3++;
            }
        }
    }
    //Punto B)Muestro la cantidad de triangulos de cada tipo.
    printf("La cantidad de triangulos equilateros es: %i",cont1++);
    printf("\n");
    printf("La cantidad de triangulos isosceles es: %i",cont2++);
    printf("\n");
    printf("La cantidad de triangulos escaleno es: %i",cont3++);
    printf("\n");

    //Punto C) Muestro el tipo de triangulo que posee menor cantidad.
    if(cont1<cont2 && cont1<cont3)
    {
        printf("Hay menor cantidad de triangulos equilateros");
        printf("\n");
    }
    else
    {
        if(cont2<cont3){
        printf("Hay menor cantidad de triangulos isosceles");
        printf("\n");
        }
        else
        {
            printf("Hay menor cantidad de triangulos escalenos");
        }
    }
    getch();
    return 0;
}
