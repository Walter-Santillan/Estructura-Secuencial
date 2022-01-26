#include<stdio.h>
#include<conio.h>

/*Escribir un programa que pida ingresar la coordenada de un punto en el plano,
es decir dos valores enteros x e y (distintos a cero).Posteriormente imprimir en
pantalla en que cuadrante se ubica dicho punto. (1º Cuadrante si x > 0 Y y > 0 ,
2º Cuadrante: x < 0 Y y > 0, etc.)*/

int main(){
    int x, y;

    printf("Ingresar la coordenada x: ");
    scanf("%i",&x);
    printf("Ingresar la coordenada y: ");
    scanf("%i",&y);

    if (x>0 && y>0){
        printf("primer cuadrante");
    }else{
        if(x<0 && y>0){
            printf("Segundo cuadrante");
        }else{
            if(x<0 && y<0){
                printf("Tercer cuadrante");
            }else{
                if(x>0 && y<0){
                    printf("Cuarto cuadrante");
                }else{
                    printf("Los puntos esta sobre los ejes");
                }
            }
        }
    }
    getch();
    return 0;
}
