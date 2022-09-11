#include <stdio.h>
#include <conio.h>

/*
Confeccionar dos funciones:
1-Permita ingresar por teclado una palabra en un vector de caracteres que llega como parámetro.
2-Retornar la cantidad de vocales que tiene la palabra.
*/

int main() {
    char pal[50];

    titulo();
    cargarPalabra(pal);
    // int vocales = cantidadVocales(pal); es una opción.
    printf("\nLa cantidad de vocales de %s es: %d\n", pal, cantidadVocales(pal));
    autor();

    getch();
    return 0;
}

void cargarPalabra(char palabra[50])
{
    printf("\nIngresar una palabra: ");
    gets(palabra);
}

int cantidadVocales(char palabra[50])
{
    // IMPLEMENTACIÓN DE UN BUCLE WHILE PORQUE HAY QUE RECORRER
    // TODAS LAS VOCALES, MINÚSCULAS Y MAYÚSCULAS.
    int cantVocales = 0;
    int x = 0;
    while (palabra[x] != '\0')
    {
        if (palabra[x] == 'a' || palabra[x] == 'e' || palabra[x] == 'i' || palabra[x] == 'o' || palabra[x] == 'u'
            || palabra[x] == 'A' || palabra[x] == 'E' || palabra[x] == 'I' || palabra[x] == 'O' || palabra[x] == 'U')
        {
            cantVocales ++;
        }
        x = x + 1;
    }
    return cantVocales;
}

void autor()
{
    printf("\n");
    printf("******************************************************************\n");
    printf("\t<< PROGRAMA DESARROLLADO POR WALTER SANTILLAN >>\n");
    printf("******************************************************************\n");
}

void titulo()
{
    printf("********************************************************\n");
    printf("\t<< PROGRAMA QUE MUESTRA\n \tLA CANTIDAD DE VOCALES. >>\n");
    printf("********************************************************\n");
}

