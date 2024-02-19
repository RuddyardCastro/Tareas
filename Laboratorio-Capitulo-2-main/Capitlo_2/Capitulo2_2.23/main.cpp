#include <iostream>
using namespace std;

int main() {
    // Declaración de variables e inicialización a 0
    int num1, num2 , num3 , num4 , num5 , maxNum , minNum ;
    num1=0;
    num2=0;
    num3=0;
    num4=0;
    num5=0;




    cout << "Introduzca cinco enteros distintos: ";
    cin >> num1 >> num2 >> num3 >> num4 >> num5;

    // Inicializar maxNum y minNum con el primer número que sera el valor de referencia
    maxNum = minNum = num1;

    // Usar if anidados para encontrar el número máximo y mínimo
    if(num2 > maxNum) {
            // Si en caso el nuemor 2 es mayor al numero uno se toma el numero 2 como nuevo valor mayor
        maxNum = num2;
    }
    // Si en caso el numero 2 es menor al numero uno se toma el numero 2 como nuevo valor menor
    if(num2 < minNum) {
        minNum = num2;
    }

    if(num3 > maxNum) {
        maxNum = num3;
    }
    if(num3 < minNum) {
        minNum = num3;
    }

    if(num4 > maxNum) {
        maxNum = num4;
    }
    if(num4 < minNum) {
        minNum = num4;
    }

    if(num5 > maxNum) {
        maxNum = num5;
    }
    if(num5 < minNum) {
        minNum = num5;
    }

    // Imprimir los resultados de la evalución
    cout << "El mayor es " << maxNum << endl;
    cout << "El menor es " << minNum << endl;

    return 0;
}

