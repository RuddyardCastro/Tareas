// Ruddyard Castro 9959-23-1409 
// 3.13
#include <string>
#include <iostream>
using namespace std;

class Factura {
private:
    string noPieza;
    string descripcionPieza;
    int cantidad;
    int precioPorArt;

public:
    // Constructor con cuatro parámetros
    //Parametros en mayusculas 
    // Atributos en minuscula 
    Factura(string Nopiezas, string DesPieza, int Cantidad, int PrecioPorArt) {
        noPieza = Nopiezas;
        descripcionPieza = DesPieza;
// Si la cantidad no es positiva, se establece en 1
        cantidad = (Cantidad > 0) ? Cantidad : 1; 
// Colocar el vaor predeterminado 
        precioPorArt = (PrecioPorArt > 0) ? PrecioPorArt : 0; 
    }

    // Funciones para establecer y obtener los valores de los miembros de datos
    void establecerNoPieza(string Nopiezas) { noPieza = Nopiezas; }
         string obtenerNoPieza() const { return noPieza; }

    void establecerDescripcionPieza(string DesPieza) { descripcionPieza = DesPieza; }
         string descripcionPiezas() const { return descripcionPieza; }

    void establecerCantidad(int Cantidad) { cantidad = (Cantidad > 0) ? Cantidad : 0; }
        int obtenerCantidad() const { return cantidad; }

    void establecerprecioPorArt(int PrecioPorArt) { precioPorArt = (PrecioPorArt > 0) ? PrecioPorArt : 0; }
          int obtenerprecioPorArt() const { return precioPorArt; }

    // Función para calcular el monto de la factura
    int obtenerMontoFactura() const { return cantidad * precioPorArt; }
};

int main() {
    // Crear un objeto de la clase Factura
    Factura miFactura("1234", "Martillo", 2, 150);

    // Mostrar el monto de la factura
     cout << "El monto de la factura es: " << miFactura.obtenerMontoFactura() << endl;

    return 0;
}
