typedef struct
{
    int legajo;
    char nombre[50];
    float altura;
    int nota;
    int estado;

}eAlumno;

void cargarListadoDeAlumnos(eAlumno listado[],int);
void mostrarListadoDeAlumnos(eAlumno listado[],int);
void ordenarPorNombre(eAlumno listado[],int);
void modificarListadoDeAlumnos(eAlumno listado[],int);


void mostrarUnAlumno(eAlumno);
eAlumno cargarUnAlumno();
