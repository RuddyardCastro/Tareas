
#include <iostream>.
// Permite manipular la salida de datos setw
#include <iomanip>
// Permite manipular cadenas de textos
#include <string>

#define NUMERO_ALUMNOS 5
#define NUMERO_NOTAS 4
#define MAX_CALIFICACION 100
#define MIN_CALIFICACION 0
#define MAXIMA_LONGITUD_CADENA 100
// Declaramos una función llamada llamaCiclo
void llamaCiclo();
// Declaramos una función llamada busquedaAleatorios
int busquedaAleatorios(int minimo, int maximo);
// Declaramos una función llamada llenarMatriz
void llenarMatriz(float matriz[NUMERO_ALUMNOS][NUMERO_NOTAS + 1]);
 // Declaramos una función llamada imprimirMatrizLinea.
void imprimirMatrizLinea();
float imprimirMatriz(float matriz[NUMERO_ALUMNOS][NUMERO_NOTAS + 1], char alumnos[NUMERO_ALUMNOS][MAXIMA_LONGITUD_CADENA], std::string nombreFacultad); // Declaramos una función llamada imprimirMatriz
