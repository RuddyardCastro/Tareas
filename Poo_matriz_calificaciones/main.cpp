#include <iostream>
#include<calificaciones.h>
using namespace std;

int main() {                 // Función principal del programa
    srand(getpid());         // Inicializa la generación de números aleatorios utilizando un número único del programa en ejecución
    llamaCiclo();            // Llama a la función llamaCiclo(), que inicia el ciclo principal del programa.
    return 0;                // Devuelve 0 para indicar que el programa se ejecutó correctamente.
}
