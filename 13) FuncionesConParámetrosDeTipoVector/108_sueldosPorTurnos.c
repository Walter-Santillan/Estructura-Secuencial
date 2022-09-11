#include <stdio.h>
#include <conio.h>

/*
Una empresa tiene dos turnos (ma�ana y tarde) en los que trabajan 8 empleados (4
por la ma�ana y 4 por la tarde)
Confeccionar un programa que permita almacenar los sueldos de los empleados agrupados por turno.
Imprimir los gastos en sueldos de cada turno.
*/

float gastoSueldos(float totalSueldos[4]);

int main()
{
    titulo();

    float sueldosTM[4];
    float sueldosTT[4];

    printf("\nCarga de sueldos del turno ma�ana");
    cargar(sueldosTM); // LLAMA A LA FUNCI�N "cargar" Y SE LE PASA POR PAR�METRO "sueldosTM".
    printf("\nCarga de sueldos del turno tarde");
    cargar(sueldosTT); // LLAMA A LA FUNCI�N "cargar" Y SE LE PASA POR PAR�METRO "sueldosTT".

    titulo_1();

    printf("\nEl gasto de sueldos del turno ma�ana es: %.2f\n", gastoSueldos(sueldosTM));
    printf("El gasto de sueldos del turno tarde es: %.2f\n", gastoSueldos(sueldosTT));

    autor();

    getch();
    return 0;
}

void cargar(float sueldos[4])
{
    printf("\n");
    // SE DEFINE UNA CONSTANTE PARA EVITAR LOS N�MEROS M�GICOS.
    const int SUELDOS = 4;
    for (int i = 0; i < SUELDOS; i ++)
    {
        printf("Ingresar los sueldos de los empleados/as: ");
        scanf("%f", & sueldos[i]);
    }
}

float gastoSueldos(float totalSueldos[4])
{
    float suma = 0;
    // SE DEFINE UNA CONSTANTE PARA EVITAR LOS N�MEROS M�GICOS.
    const int SUELDOS = 4;
    for (int i = 0; i < SUELDOS; i ++)
    {
        suma = suma + totalSueldos[i];
    }
    return suma;
}

void titulo_1()
{
    printf("\n\tSUELDOS\n");
}

void titulo()
{
    printf("*************************************************\n");
    printf("\t<< PROGRAMA QUE CALCULA SUELDOS >>\n");
    printf("*************************************************");
}

void autor()
{
    printf("\n*************************************************\n");
    printf("<< PROGRAMA DESARROLLADO POR WALTER SANTILLAN >>\n");
    printf("*************************************************\n");
}
