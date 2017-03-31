#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

float promedio(int edad[], int cantidad){

    float retornoPromedio;
    int i, suma=0;

    for(i=0;i<cantidad;i++){
        suma=suma+edad[i];
    }
    retornoPromedio=(float)suma/cantidad;

    return retornoPromedio;
}
/*int obtenerMinimo(int edad[], int cantidad){
    int menor=INT_MAX;
    int i;


    for(i=0;i<cantidad;i++)
    {

        if(edad[i]<menor)
        {
            menor=edad[i];
        }
    }
    return menor;
}
*/
int compactar(int edad[], int size, int indice)
{
    int i;
    for(i=indice; i<size-1; i++)
    {
        edad[i]=edad[i+1];


    }
    return size-1;

}

int indiceMinimo(int edad[], int size)
{
    int indice=1;
    int minimo=edad[0];
    int indiceDelMinimo=0;

    for( ;indice<size; indice++)
    {
        if (edad[indice]<minimo)
        {
            indiceDelMinimo=indice;
        }
    }
    return indiceDelMinimo;

}
void ordenar(int array[], int size, int arrayOrdenado[])
{
    int i;
    int indiceMenor;
    int sizeInicial=size;
    for(i=0; i<size; i++)
    {
        indiceMenor=indiceMinimo(array, size);
        arrayOrdenado[i] = array[indiceMenor];
        compactar(array, size, indiceMenor);
    }
}
