// 9959-23-1409
// Ruddyard Castro 3.3.11

#include <iostream>
#include "LibroCalificaciones.h"

using namespace std;

// Constructor modificado para incluir el nombre del Catedratico
LibroCalificaciones::LibroCalificaciones(string nombreCurso, string nombreCatedratico)
    : nombreCurso(nombreCurso), nombreCatedratico(nombreCatedratico) {}

void LibroCalificaciones::establecerNombreCurso(string nombre)
{
    nombreCurso = nombre;
}

string LibroCalificaciones::obtenerNombreCurso() const
{
    return nombreCurso;
}

// Implementación de la nueva función para establecer el nombre del Catedratico
void LibroCalificaciones::establecernombreCatedratico(string nombre)
{
    nombreCatedratico = nombre;
}

// Implementación de la nueva función para obtener el nombre del Catedratico
string LibroCalificaciones::obtenernombreCatedratico() const
{
    return nombreCatedratico;
}

// Función modificada para mostrar el mensaje
void LibroCalificaciones::mostrarMensaje() const
{
    cout << "Bienvenido al libro de calificaciones para " << obtenerNombreCurso() << endl;
    cout << "Este curso es presentado por: " << obtenernombreCatedratico() << endl;
}
