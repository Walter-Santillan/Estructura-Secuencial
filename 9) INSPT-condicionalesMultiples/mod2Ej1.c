#include <stdio.h>
#include <math.h>

int main()
{
    int opc;
    float num;

    printf("\t<< CALCULADORA - MENU DE OPCIONES >>\n\n");
    printf("(1) EL TRIPLE\n");
    printf("(2) EL CUADRADO\n");
    printf("(3) LOGARITMO NATURAL\n");
    printf("(4) LOGARITMO DECIMAL\n");
    printf("(5) SENO\n");

    printf("\nEscribir la opcion que desees [1-5]: ");
    scanf("%d", & opc);

    switch(opc)
    {
        case 1:
            printf("Escribe el numero: ");
            scanf("%f", & num);
            printf("\tEl triple de %.20f es %.20f\n", num, 3 * num);
            break;
        case 2:
            printf("Escribe el numero: ");
            scanf("%f", & num);
            printf("\tEl cuadrado de %.20f es %.20f\n", num, num * num);
            break;
        case 3:
            printf("Escribe el numero: ");
            scanf("%f", & num);
            printf("\tEl logaritmo neperiano de %.20f es %.20f\n", num, log(num));
            break;
        case 4:
            printf("Escribe el numero: ");
            scanf("%f", & num);
            printf("\tEl logaritmo decimal de %.20f es %.20f\n", num, log10(num));
            break;
        case 5:
            printf("Escribe el numero: ");
            scanf("%f", & num);
            printf("\tEl seno de %.20f es %.20f\n", num, sin(num));
            break;
        default:
            printf("\nOpcion invalida intente nuevamente \n");
            break;
    }
}
