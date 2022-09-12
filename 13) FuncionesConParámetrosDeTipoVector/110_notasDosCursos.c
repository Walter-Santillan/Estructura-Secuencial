#include <stdio.h>
#include <conio.h>

/*
Se tienen las notas del primer parcial de los alumnos de dos cursos, el curso A y el
curso B, cada curso cuenta con 5 alumnos.
1-Realizar la carga de las notas.
2-Mostrar el nombre del curso que obtuvo el mayor promedio general.
*/

int main() {
    int curso_A[5];
    int curso_B[5];

    titulo();

    printf("\nCarga de curso A: ");
    cargarCurso(curso_A);
    printf("\nCarga de curso B: ");
    cargarCurso(curso_B);

    printf("\nEl promedio del curso A es: %d\n", promedio(curso_A));
    printf("El promedio del curso B es: %d\n", promedio(curso_B));

    if (promedio(curso_A) > promedio(curso_B))
    {
        printf("El curso A tiene mayor promedio.\n");
    }else
    {
        if (promedio(curso_A) < promedio(curso_B))
        {
            printf("El curso B tiene mayor promedio.\n");
        }
        else
        {
            printf("Ambos cursos tienen el mismo promedio.\n");
        }
    }

    autor();
}

void cargarCurso (int curso[5])
{
    printf("\n");
    for (int i = 0; i < 5; i++)
    {
        printf("Ingresar notas: ");
        scanf("%d", & curso[i]);
    }
}

int promedio (int curso[5])
{
    int suma = 0;
    int promedio;
    for (int i = 0; i < 5; i ++)
    {
        suma = suma + curso[i];
    }
    promedio = suma / 5;
    return promedio;
}

void titulo()
{
    printf("*************************************************\n");
    printf("\t<< PROGRAMA QUE CALCULA\n \tPROMEDIOS DE NOTAS >>\n");
    printf("*************************************************");
}

void autor()
{
    printf("\n*************************************************\n");
    printf("<< PROGRAMA DESARROLLADO POR WALTER SANTILLAN >>\n");
    printf("*************************************************\n");
}
