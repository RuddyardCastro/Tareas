#include <iostream>
// Agregear libreria string (Para usar operadores que manipulan cadena == y !=) ademas de usar string
#include <string>
// Ruddyard Castro 9959-23-1409
int main() {
    using namespace std;
    string respuesta;
// Inicar el loops con true  para ingresar a la calculadora
    while (true) {
        break;
        }

       float litros,kilometros,resultado;
       litros=0;
       kilometros=0;
       resultado =0;
        cout << "Introdusca los kilometros recorridos: ";
        cin >> kilometros;
         cout << "Introduzca los litros usados: ";
        cin >> litros;
        resultado=kilometros/litros;
        cout<<"El total de kilompetros por litros es: "<<resultado<<endl;
          cout << "¿Deseas hacer otra operacion? (s/n): ";
        cin >> respuesta;
         cout << "¿Deseas iniciar la calculadora? (s/n): ";
        cin >> respuesta;

        if (respuesta == "n" || respuesta == "n") {

    }
    cout<<"Gracias por usar nuestro servicio"<<endl;
    return 0;
}
