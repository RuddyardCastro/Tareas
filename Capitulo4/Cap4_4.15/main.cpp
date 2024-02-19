#include <iostream>
// Agregear libreria string (Para usar operadores que manipulan cadena == y !=) ademas de usar string
#include <string>
// Ruddyard Castro 9959-23-1409
int main() {
    using namespace std;
    string respuesta;
// Inicar el loops con true  para preguntar si desea iniciar la calculadora
    while (true) {


       float totalVendido,resultado;
      const float sueldo=200;
      const float comicion = 0.09;

      totalVendido=0;
      resultado=0;
        cout << "Introdusca las ventas en USD por semana: ";
        cin >> totalVendido;

        resultado=sueldo+(comicion*totalVendido);
        cout<<"El total a pagar al empleado por la semana es : "<<resultado<<endl;

     cout << "¿Deseas iniciar la calculadora? (s/n): ";
        cin >> respuesta;

        if (respuesta == "n" || respuesta == "n") {
            break;
        }
    }

    cout<<"Gracias por usar nuestro servicio"<<endl;
    return 0;
}
