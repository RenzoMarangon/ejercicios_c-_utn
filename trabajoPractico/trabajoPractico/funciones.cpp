#include <iostream>
#include "funciones.h"
#include <string>
#include <cstdlib>

using namespace std;

void esperarEnter()
{
    printf("Presiona Enter para continuar...");
    fflush(stdout); // Limpiar el b�fer de salida

    // Esperar a que el usuario presione Enter
    while (getchar() != '\n');
}


void salir()
{
    return;
}

int random(int limite)
{
    return rand() % limite + 1;
}



