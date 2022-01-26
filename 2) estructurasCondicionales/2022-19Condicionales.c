#include<stdio.h>
#include<conio.h>

/*Un postulante a un empleo, realiza un test de capacitación, se obtuvo la siguiente información:
cantidad total de preguntas que se le realizaron y la cantidad de preguntas que contestó correctamente.
Se pide confeccionar un programa que ingrese los dos datos por teclado e informe el nivel del mismo
según el porcentaje de respuestas correctas que ha obtenido, y sabiendo que:
    Nivel máximo:	Porcentaje >= 90%.
	Nivel medio:	Porcentaje >= 75% y < 90%.
	Nivel regular:	Porcentaje >= 50% y < 75%.
	Fuera de nivel:	Porcentaje < 50%.
*/

int main(){
    int totalPreg, cantTotPregCont, porcentaje;

    printf("Ingrese la cantidad total de preguntas del examen: ");
    scanf("%i", &totalPreg);
    printf("Ingrese la cantidad de preguntas contestadas correctamente: ");
    scanf("%i", &cantTotPregCont);

    porcentaje = cantTotPregCont*100/totalPreg;

    if (porcentaje >= 90){
        printf("Nivel Maximo");
    }else{
        if (porcentaje >= 75){
            printf("Nivel Medio");
        }else{
            if (porcentaje >= 50){
                printf("Nivel Regular");
            }else{
                printf("Fuera de Nivel");
            }
        }
    }
    getch();
    return 0;
}
