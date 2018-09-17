#include <stdio.h>
#include <stdlib.h>
#include "Funciones.h"
#define A 2

int main()
{
    eAlumno listadoMain[A];

    cargarListadoDeAlumnos(listadoMain,A);
    mostrarListadoDeAlumnos(listadoMain,A);
    ordenarPorNombre(listadoMain,A);

    return 0;
}
