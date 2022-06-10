#include <stdio.h>

/*Ingresar tu edad y nombre.*/

typedef char cadena [30];

int main()
{
    printf("\t<< USANDO FFLUSH >>");

    cadena nombre;
    int edad;

    printf("\nIngresar tu edad: ");
    scanf("%d", & edad);

    printf("Tu edad es: %d\n", edad);

    fflush(stdin);

    printf("\nIngresar tu nombre: ");
    gets(nombre);
    printf("Hola %s, Bienvenido/a!!!!\n", nombre);
}
