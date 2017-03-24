#include <stdio.h>
int obtenerInt(char mensaje[],char mensajeError[],int maximo, int minimo)
{
    int buffer;
    printf("%s",mensaje);
    scanf("%d", &buffer);

    while(buffer>maximo||buffer<minimo)
    {
       printf("%s",mensajeError);
       scanf("%d",&buffer);

    }
    return buffer;


}
