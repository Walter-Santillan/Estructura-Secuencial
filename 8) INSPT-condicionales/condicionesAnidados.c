#include <stdio.h>

int main()
{
    int edad;

    printf("\nIngresar edad: ");
    scanf("%d", & edad);

    if (edad <= 12)
    {
        printf("Escuela primaria\n");
    }else
    {
        if (edad > 12 && edad <= 18)
        {
            printf("Escuela secundaria\n");
        }else
        {
            if (edad > 18)
            {
                printf("Escuela universitaria\n");
            }
        }
    }
    return 0;
}
