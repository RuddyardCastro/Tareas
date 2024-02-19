#include <iostream>

using namespace std;

int main()
{
    // Asignación de variables tipo int
        int c, estaEsUnaVariable, q76354, numero;

    // Solicitar al usuario que introduzca un entero
        cout << "Introduzca un entero: ";
        int edad;
        cin >> edad;

    // Evaluar si numero es igual a 7
    numero = 0;
    if (numero != 7) {
        cout << "La variable numero no es igual a 7" << endl;
    }

    // Imprimir que esto es un programa en C++
        cout << "Este es un programa en C++" << endl;

    // Imprimir en dos líneas
        cout << "Este es un programa en" << endl;
        cout << "C++" << endl;
    // Imprimir palabra por palabra usand \n

        std::cout << "Este\n";
        std::cout << "es\n";
        std::cout << "un\n";
        std::cout << "programa\n";
        std::cout << "en\n";
        std::cout << "C++" << std::endl;
    // Separado por tabulaciónes usado \t
        std::cout << "Este\t";
        std::cout << "es\t";
        std::cout << "un\t";
        std::cout << "programa\t";
        std::cout << "en\t";
        std::cout << "C++" << std::endl;



    return 0;
}

