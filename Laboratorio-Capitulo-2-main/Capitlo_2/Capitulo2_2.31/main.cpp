#include <iostream>
using namespace std;

int main() {
    double kilometros;
    double gasolina_usada_galones;
    double costo_gasolina;
    double cuota_estacionamiento;
    double peaje;
// El sitema registra datos en sistema imperial para la gasolina pero internacional para la distancia
// La respuesta ya esta en sistema internacional
    cout << "Introduce el total de kilometros conducidos por dia: ";
    cin >> kilometros;

    cout << "Introduce la cantidad total de gasolina utilizada (en galones): ";
    cin >> gasolina_usada_galones;

    // Convertir galones a litros
    double gasolina_usada = gasolina_usada_galones * 3.78541;

    cout << "Introduce el costo por galon de gasolina: ";
    cin >> costo_gasolina;

    cout << "Introduce las cuotas de estacionamiento por dia: ";
    cin >> cuota_estacionamiento;

    cout << "Introduce el peaje por dia: ";
    cin >> peaje;

    double promedio_kilometros = kilometros / gasolina_usada;
    double costo_diario = (kilometros / promedio_kilometros * costo_gasolina) + cuota_estacionamiento + peaje;

    cout << "El promedio de kilometros por litro es: " << promedio_kilometros << endl;

    cout << "El costo diario de conducir al trabajo es: " << costo_diario << endl;

    return 0;
}

