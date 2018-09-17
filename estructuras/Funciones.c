#include "Funciones.h"
#include <stdio.h>
#include <string.h>
#define A 2

eAlumno cargarUnAlumno()
{
    eAlumno miAlumno;

    printf("\nIngrese legajo: ");
    scanf("%d",&miAlumno.legajo);

    printf("\nIngrese nombre: ");
    fflush(stdin);
    gets(miAlumno.nombre);

    printf("\nIngrese altura: ");
    scanf("%f",&miAlumno.altura);

    printf("\nIngrese nota: ");
    scanf("%d",&miAlumno.nota);

    return miAlumno;
}

void mostrarUnAlumno(eAlumno unAlumno)
{
    printf("\n%d---%s---%.2f---%d\n",unAlumno.legajo,unAlumno.nombre,unAlumno.altura,unAlumno.nota);
}

void cargarListadoDeAlumnos(eAlumno listado[],int tam)
{
    int i;
    for(i=0;i<tam;i++)
    {
       listado[i]=cargarUnAlumno();
    }
}

void mostrarListadoDeAlumnos(eAlumno listado[],int tam)
{
    int i;
    for(i=0;i<tam;i++)
    {
         mostrarUnAlumno(listado[i]);
    }

}

void ordenarPorNombre(eAlumno listado[],int tam)
{
    int i;
    int j;

    eAlumno auxAlumno;

    for(i=0;i<tam-1;i++)
    {
        for(j=i;j<tam;j++)
        {
            if(strcmp(listado[i].nombre,listado[j].nombre)>0)
            {
                auxAlumno=listado[i];
                listado[i]=listado[j];
                listado[j]=auxAlumno;
            }
        }
    }
}
