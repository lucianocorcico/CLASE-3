#include <stdio.h>
#include <stdlib.h>
#include "biblioteca.h"

int main()
{
    int edad;
    edad=obtenerInt("ingrese edad: ", "error, reingrese edad valida: ", 100, 0);
    printf("%d", edad);

    return 0;



}
