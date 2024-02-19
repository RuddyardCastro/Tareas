#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
// iomanpi  se uso para setprecision: Permite establecer la precisión decimal de los números de punto flotante1.
// Use cmath por que nesesito la raiz cuadrada para aplicar pitagoras
// pow potecia(Tamaño,potencia) y sqrt raiz (parametro,tamaño raiz )
// Ruddyard Castro  9959-23-1409
int main() {
    double catetoAdyacente, catetoOpuesto, hipotenusa;

    cout << "Introduce el cateto adyacente: ";
    cin >> catetoAdyacente;
    cout << "Introduce el cateto opuesto: ";
    cin >> catetoOpuesto;
    cout << "Introduce la hipotenusa: ";
    cin >> hipotenusa;

    // Calcula la hipotenusa esperada
    double hipotenusaEsperada = sqrt(pow(catetoAdyacente, 2) + pow(catetoOpuesto, 2));

    // Redondea la hipotenusa esperada a dos decimales
    hipotenusaEsperada = round(hipotenusaEsperada * 100) / 100;

    cout << fixed << setprecision(2); // Establece la precisión de la salida a dos decimales

    if (hipotenusa < hipotenusaEsperada) {
        cout << "Es imposible que sea un triangulo rectangulo." << endl;
    } else if (hipotenusa == hipotenusaEsperada) {
        cout << "Los numeros pueden ser los lados de un triangulo rectangulo." << endl;
    } else {
        cout << "La hipotenusa es demasiado larga para ser un triangulo rectangulo con los catetos dados." << endl;
    }

    return 0;
}
