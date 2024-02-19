#include <iostream>
using namespace std;
// Ruddyard Castro 9959-23-1409
int main() {
    // Uso size por que no uso ñ por lo cual size es tamaño en este programa
    int size;
        cout << "Introduce el size del lado de un cuadrado (entre 1 y 20): ";
    cin >> size;

    if(size < 1 || size > 20) {
        cout << "size inválido. Debe estar entre 1 y 20.";
        return 0;
    }
    /// Resliza i  en vertical
    for(int i = 0; i < size; i++) {
        /// Realiza el recorrido en horizontal columnas
        for(int j = 0; j < size; j++) {
        // Invetigado : El size -1 permite comprobar si se esta dentro de un arreglo  ya que van
        // desde 0 a 19 es decir los 20 valores si hacemos size 1 le resta para para ser columna 0
        // || es or aqui teclas Alt+124
            if(i == 0 || i == size - 1 || j == 0 || j == size - 1)
                cout << "*";
            else
                cout << " ";
        }
        cout << "\n";
    }

    return 0;
}
