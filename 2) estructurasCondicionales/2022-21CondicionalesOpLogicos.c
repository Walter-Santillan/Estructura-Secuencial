#include<stdio.h>
#include<conio.h>

/*Se carga una fecha (día, mes y año) por teclado y Mostrar un mensaje si corresponde
al primer trimestre del año (enero, febrero o marzo) Cargar por teclado el valor numérico del día, mes y año.
Ejemplo: dia:10 mes:2 año:2017.
*/

int main(){
    int dd,mm,aa;

    printf("Ingrese el dia: ");
    scanf("%i", &dd);
    printf("Ingrese el mes: ");
    scanf("%i", &mm);
    printf("Ingrese al año: ");
    scanf("%i", &aa);

    if (mm==1 || mm==2 || mm==3){
        printf("Corresponde al primer trimestre");
    } else{
        printf("Fuera de rango");
    }
    getch();
    return 0;
}
