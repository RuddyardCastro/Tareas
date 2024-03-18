#include <iostream>
using namespace std; // Esta línea permite usar los nombres de la biblioteca estándar de C++ sin el prefijo std::

class Fecha {
private:
    int mes;
    int dia;
    int year;

public:
    // Constructor con tres parámetros
    Fecha(int Mes, int Dia, int Year) {
        // Validamos el valor del mes (debe estar entre 1 y 12)
        if (Mes >= 1 && Mes <= 12) {
            mes = Mes;
        } else {
            mes = 1; // Establecemos el mes en 1 si es inválido
        }
        dia = Dia;
        year = Year;
    }

    // Función para establecer los valores de mes, día y año
    void establecer(int Mes, int Dia, int Year) {
        // Validamos el valor del mes (debe estar entre 1 y 12)
        if (Mes >= 1 && Mes <= 12) {
            mes = Mes;
        } else {
            mes = 1; // Establecemos el mes en 1 si es inválido
        }
        dia = Dia;
        year = Year;
    }

    // Función para obtener el valor del mes
    int obtenerMes() const {
        return mes;
    }

    // Función para obtener el valor del día
    int obtenerDia() const {
        return dia;
    }

    // Función para obtener el valor del año
    int obtenerYear() const {
        return year;
    }

    // Función para mostrar la fecha en formato "mes/día/año"
    void mostrarFecha() const {
        cout << dia << "/" << mes << "/" << year << endl; // Usamos cout sin el prefijo std:: gracias a la línea using namespace std;
    }
};

int main() {
    // Crear un objeto de la clase Fecha
    Fecha miFecha(3, 18, 2024);

    // Mostrar la fecha
    cout << "Fecha actual: "; // Usamos cout sin el prefijo std:: gracias a la línea using namespace std;
    miFecha.mostrarFecha();

    // Cambiar la fecha utilizando la función establecer
    miFecha.establecer(12, 31, 2024);

    // Mostrar la fecha actualizada
    cout << "Fecha actualizada: "; // Usamos cout sin el prefijo std:: gracias a la línea using namespace std;
    miFecha.mostrarFecha();

    return 0;
}

