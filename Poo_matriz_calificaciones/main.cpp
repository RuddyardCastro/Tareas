#include <iostream>
#include<calificaciones.h>
using namespace std;

int main() {                 // Funci�n principal del programa
    srand(getpid());         // Inicializa la generaci�n de n�meros aleatorios utilizando un n�mero �nico del programa en ejecuci�n
    llamaCiclo();            // Llama a la funci�n llamaCiclo(), que inicia el ciclo principal del programa.
    return 0;                // Devuelve 0 para indicar que el programa se ejecut� correctamente.
}
