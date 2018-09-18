#include <stdio.h>
#include <stdlib.h>
#include "Funciones.h"
#define A 2

int main()
{
    eAlumno listado[A];

    int i;

    for(i=0;i<A;i++)
    {
            listado[i].estado=-1;
    }

    char opcion;

    do
    {
        printf("a. Alta de alumno\no. Ordenar lista de alumnos\nM. Modificar\n.m Mostrar listado\ns. Salir\n");
        printf("\nIngrese una opcion: ");
        opcion= getche();
        switch(opcion)
        {
                case 'a':
                    cargarListadoDeAlumnos(listado,A);
                    break;
                case 'o':
                    ordenarPorNombre(listado,A);
                    break;
                case 'm':
                    mostrarListadoDeAlumnos(listado,A);
                    break;
                case 'M':
                    modificarListadoDeAlumnos(listado,A);
                    break;
        }

    }while(opcion!='s');

    return 0;
}
