#include<stdio.h>
#include<conio.h>

/*27) De un operario se conoce su sueldo y los años de antigüedad. Se pide confeccionar un programa
    que lea los datos de entrada e informe:

    a) Si el sueldo es inferior a 500 y su antigüedad es igual o superior a 10 años, otorgarle un aumento
    del 20 %, mostrar el sueldo a pagar.
    b) Si el sueldo es inferior a 500 pero su antigüedad es menor a 10 años, otorgarle un aumento de 5 %.
    c) Si el sueldo es mayor o igual a 500 mostrar el sueldo en pantalla sin cambios.
*/
int main(){
    float sueldo;
    int antiguedad;

    printf("Ingresar el sueldo del empleado: ");
    scanf("%f",&sueldo);
    printf("Ingresar la antiguedad del empleado: ");
    scanf("%i",&antiguedad);

    /*a) Si el sueldo es inferior a 500 y su antigüedad es igual o superior a 10 años, otorgarle un aumento
    del 20 %, mostrar el sueldo a pagar.*/

    if (sueldo<500 && antiguedad>=10){
        float aumento = sueldo * 0.20;
        float sueldoPag = aumento + sueldo;
        printf("\nEl sueldo a pagar es: %.2f",sueldoPag);
    }
    /*b) Si el sueldo es inferior a 500 pero su antigüedad es menor a 10 años, otorgarle un aumento de 5 %.*/

    else {
        if (sueldo<500 && antiguedad<10){
            float aumento = sueldo * 0.05;
            float sueldoPag = aumento + sueldo;
            printf("\nEl sueldo a pagar es: %.2f",sueldoPag);
        }
    /*c) Si el sueldo es mayor o igual a 500 mostrar el sueldo en pantalla sin cambios.*/
    else{
        printf("\nEl sueldo a pagar es: %.2f",sueldo);
    }
    }
    getch();
    return 0;
}

