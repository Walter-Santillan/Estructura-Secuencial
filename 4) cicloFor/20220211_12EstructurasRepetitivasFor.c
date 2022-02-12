/*Se realiza la carga de 10 valores enteros por teclado. Se desea conocer:
a) La cantidad de valores ingresados negativos.
b) La cantidad de valores ingresados positivos.
c) La cantidad de múltiplos de 15.
d) El valor acumulado (suma) de los números ingresados que son pares.*/

int main()
{
    int valor,f,multiplo15,sumaPar,valorNegativo,valorPositivo;
    multiplo15=0;
    sumaPar=0;
    valorNegativo=0;
    valorPositivo=0;

    for(f=1;f<=10;f++)
    {
        printf("Igresar valores: ");
        scanf("%i",&valor);

        if (valor<0)
        {
            valorNegativo++;
        }
        else
        {
            if(valor>0)
            {
                valorPositivo++;
            }
        }
        if (valor%15==0)
        {
            multiplo15++;
        }
        if (valor%2==0)
        {
            sumaPar=sumaPar+valor;
        }
    }
    printf("-----------------------------------------------------\n");
    printf("La cantidad de valores positivos es: %i",valorPositivo);
    printf("\n");
    printf("La cantidad de valores negativos es: %i",valorNegativo);
    printf("\n");
    printf("La cantidad de multiplos de 15 es: %i",multiplo15);
    printf("\n");
}
