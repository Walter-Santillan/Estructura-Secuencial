#include<stdio.h>
#include<conio.h>

/*Se carga una fecha (d�a, mes y a�o) por teclado y Mostrar un mensaje si corresponde
al primer trimestre del a�o (enero, febrero o marzo) Cargar por teclado el valor num�rico del d�a, mes y a�o.
Ejemplo: dia:10 mes:2 a�o:2017.
*/

int main(){
    int dd,mm,aa;

    printf("Ingrese el dia: ");
    scanf("%i", &dd);
    printf("Ingrese el mes: ");
    scanf("%i", &mm);
    printf("Ingrese al a�o: ");
    scanf("%i", &aa);

    if (mm==1 || mm==2 || mm==3){
        printf("Corresponde al primer trimestre");
    } else{
        printf("Fuera de rango");
    }
    getch();
    return 0;
}
