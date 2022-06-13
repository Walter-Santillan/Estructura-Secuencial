#include <stdio.h>

/*
Programa que convierte kg a otra unidad de medida de mas.
*/

int main()
{
    float peso;
    int opc;
    printf("\t<< CONVERTIDOR DE MEDIDAS DE MASA >>\n");

    printf("\nIngresar el peso en kg: ");
    scanf("%f", & peso);
    printf("\n\tMenu de opciones: \n\n");

    printf("1-Hectogramos hg (decima parte de un kg.)\n");
    printf("2-Decagramos dag (centesima parte de un kg).\n");
    printf("3-Gramos gr (milesima parte de un kg).\n");
    printf("4-Decigramos dg (diezmilesima parte de un kg).\n");
    printf("5-Centigramos cg (cienmilesima parte de un kg).\n");
    printf("6-Miligramos mg (millonesima parte de un kg).\n");

    printf("\nSeleccionar una opcion: ");
    scanf("%d", & opc);

    switch (opc)
    {
        case 1:
            peso = peso * 10;
            printf("\tSon: %.2f hg\n", peso);
            break;
        case 2:
            peso = peso * 100;
            printf("\t Son: %.2f dag\n", peso);
            break;
        case 3:
            peso = peso * 1000;
            printf("\tSon: %.2f gr\n", peso);
            break;
        case 4:
            peso = peso * 10000;
            printf("\tSon: %.2f dg\n", peso);
            break;
        case 5:
            peso = peso * 100000;
            printf("\tSon: %.2f cg\n", peso);
            break;
        case 6:
            peso = peso * 1000000;
            printf("\tSon: %.2f mg\n", peso);
            break;
        default:
            printf("\tOpcion invalida!!. Intente nuevamente.");
            break;
    }
}


