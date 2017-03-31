#include <stdio.h>
#include <stdlib.h>
#include "func.h"
#define MAX 100

int main(){
    int i=5;
    int edad[MAX] = {22,11,33,55,66};
    //char respuesta;
   // int minimo;
    int buffer;
    int size=5;
    int edadOrdenada [MAX];


    for(i=0;i<size;i++)
    {
       printf("\n\n%d", edad[i]);
    }

    return 0;

    printf("\nindex %d", indiceMinimo(edad, size));
    size=compactar(edad,size,2);
    printf("\nindex %d", indiceMinimo(edad, size));
    /*for(i=0; i<MAX;i++){

        printf("\nIngrese la edad de la persona %d: ", i);
        scanf("%d", &edad[i]);

        printf("\n\nDesea seguir ingresando? [s/n]");
        fflush(stdin);
        scanf("%c", &respuesta);

        if(respuesta!='s'&&respuesta!='S'){
            break;
        }

        system("cls");
    }*/

    //printf("\nEl promedio de las edades ingresadas es %.2f", promedio(edad, i+1));
    //printf("\n El minimo de las edades ingresadas es %d", obtenerMinimo(edad, 5));

}
