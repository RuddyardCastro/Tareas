#include <iostream>
using namespace std;

int main() {
    // Declaración de variables e inicialización a 0
    int num1;
    int num2;
    num1 =0;
    num2 = 0;

    cout << "Introduzca dos enteros: ";
    cin >> num1 >> num2;

    // Usar el operador módulo para determinar si num1 es múltiplo de num2
    // Usamos residu por que en caso es 0 significa que si es multiplo  ya que es un divición exacta
    if(num1 % num2 == 0) {
        cout << num1 << " es multiplo de " << num2 << endl;
    } else {
        cout << num1 << " no es multiplo de " << num2 << endl;
    }

    return 0;
}

