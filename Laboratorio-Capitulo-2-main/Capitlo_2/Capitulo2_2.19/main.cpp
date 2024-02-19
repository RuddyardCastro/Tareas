#include <iostream>
using namespace std;

int main() {
    // Declaración de variables
    int num1, num2, num3, suma, producto, menor, mayor;
    float promedio;

    // Solicitar al usuario que introduzca tres enteros
    cout << "Introduzca tres enteros distintos: ";
    cin >> num1 >> num2 >> num3;

    // Calcular la suma, promedio y producto
    suma = num1 + num2 + num3;
    promedio = suma / 3.0;
    producto = num1 * num2 * num3;

    // Determinar el número menor y mayor
    menor = num1;
    if(num2 < menor) {
        menor = num2;
    }
    if(num3 < menor) {
        menor = num3;
    }

    mayor = num1;
    if(num2 > mayor) {
        mayor = num2;
    }
    if(num3 > mayor) {
        mayor = num3;
    }

    // Imprimir los resultados
    cout << "La suma es " << suma << endl;
    cout << "El promedio es " << promedio << endl;
    cout << "El producto es " << producto << endl;
    cout << "El menor es " << menor << endl;
    cout << "El mayor es " << mayor << endl;

    return 0;
}
