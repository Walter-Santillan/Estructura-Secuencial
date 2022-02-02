#include<stdio.h>
#include<conio.h>
/*En una empresa trabajan n empleados cuyos sueldos oscilan entre $100 y $500,
realizar un programa que lea los sueldos que cobra cada empleado e informe cuántos
empleados cobran entre $100 y $300 y cuántos cobran más de $300. Además el programa
deberá informar el importe que gasta la empresa en sueldos al personal.*/

int main(){
    int x,n,cantEmpleado1,cantEmpleado2;
    float sueldos,gastoSueldos;

    cantEmpleado1 = 0;
    cantEmpleado2 = 0;
    gastoSueldos = 0;
    x = 1;

    printf("#######################################################\n");
    printf("\tDesarrollado por Walter Santillan\n");
    printf("#######################################################\n");

    printf("\nCuantos empleados tiene la empresa: ");
    scanf("%i",&n);

    while(x <= n){
        printf("Ingrese el sueldo del empleado: ");
        scanf("%f",&sueldos);
        if (sueldos <= 300){
            cantEmpleado1 = cantEmpleado1 + 1;
        }else{
            cantEmpleado2 = cantEmpleado2 + 1;
        }
        gastoSueldos = gastoSueldos + sueldos;
        x = x + 1;
    }
    printf("\nLa cantidad de empleados con sueldos entre 100 y 300 es: %i",cantEmpleado1);
    printf("\n################################################################");
    printf("\nLa cantidad de empleados con sueldos mayores a 300 es: %i",cantEmpleado2);
    printf("\n################################################################");
    printf("\nEl gasto total de la empressa en sueldos es: %.2f",gastoSueldos);

    getch();
    return 0;
}
