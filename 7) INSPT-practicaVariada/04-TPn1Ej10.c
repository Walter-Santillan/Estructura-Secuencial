#include <stdio.h>

/*
10)Realizá un programa que permita al usuario ingresar los nombres de tres inversores junto al
capital invertido por cada uno. La computadora debe informar qué porcentaje del total aportó cada
uno y cuál es el monto del total aportado entre los tres
*/

typedef char nombresDeInversores[30];

int main()
{
    //DECLARO LAS VARIABLES:
    nombresDeInversores nombre_1, nombre_2, nombre_3;
    float capital_1, capital_2, capital_3, montoTotal;

    printf("\t<< PROGRAMA INVERSORES >>\n");
    //INGRESO DE DATOS:
    printf("\nIngresar el primer nombre: ");
    fflush(stdin);
    gets(nombre_1);
    printf("Ingresar el aporte de capital: ");
    scanf("%f", & capital_1);

    printf("\nIngresar otro nombre: ");
    fflush(stdin);
    gets(nombre_2);
    printf("Ingresar el aporte de capital: ");
    scanf("%f", & capital_2);

    printf("\nIngresar otro nombre: ");
    fflush(stdin);
    gets(nombre_3);
    printf("Ingresar el aporte de capital: ");
    scanf("%f", & capital_3);

    //PROCESO DE DATOS:
    montoTotal = capital_1 + capital_2 + capital_3;

    // SALIDA:
    // SE MUESTRA CUAL ES EL MONTO TOAL APORTADO ENTRE LOS TRES INVERSORES.
    printf("\nEl monto toal es: %.2f\n", montoTotal);
    //INFORMA QUE PORCENTAJE DEL TOTAL APORTÓ CADA INVERSOR/A.
    printf("%s aporto el %.2f %%\n", nombre_1, ((capital_1 * 100) / montoTotal));
    printf("%s aporto el %.2f %%\n", nombre_2, ((capital_2 * 100) / montoTotal));
    printf("%s aporto el %.2f %%\n", nombre_3, ((capital_3 * 100) / montoTotal));

    return 0;
}
