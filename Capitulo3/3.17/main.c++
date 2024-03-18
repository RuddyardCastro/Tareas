// 9959-23-1409 Ruddyard Castro 3.17 
// Uso de sistema intrnacional para medidas 
// años expresado como year 
#include <iostream>
#include <string>
// Inclir math para usar pow 
#include <math.h>
using namespace std;
// Cosntructor
class PerfilMedico {
private:
    string primerNombre;
    string primerApellido;
    string sexo;
    int diaNacimiento;
    int mesNacimiento;
    int yearNacimiento;
    float altura; //metros
    float peso; // en kilogramos

public:
    // Constructor
    PerfilMedico(string nombre, string apell, string s, int dia, int mes, int year, float alt, float weight)
        : primerNombre(nombre), primerApellido(apell), sexo(s), diaNacimiento(dia), mesNacimiento(mes), yearNacimiento(year), altura(alt), peso(weight) {}

    // Funciones para establecer los datos
    void establecerPrimerNombre(string nombre) {
        primerNombre = nombre;
    }
    void establecerprimerApellido(string apell) {
        primerApellido = apell;
    }
    void establecerSexo(char s) {
        sexo = s;
    }
    void establecerFechaNacimientodia(int dia) {
        diaNacimiento = dia;
    }
    void establecerFechaNacimientomes(int mes) {
        mesNacimiento = mes;
    }
    void establecerFechaNacimientoyear(int year) {
        yearNacimiento = year;
    }
    void establecerAltura(float alt) {
        altura = alt;
    }
    void establecerPeso(float weight) {
        peso = weight;
    }

    // Funciones para obtener los datos
    string obtenerPrimerNombre() const {
        return primerNombre;
    }
    string obtenerprimerApellido() const {
        return primerApellido;
    }
    string obtenerSexo() const {
        return sexo;
    }
    int obtenerDiaNacimiento() const {
        return diaNacimiento;
    }
    int obtenerMesNacimiento() const {
        return mesNacimiento;
    }
    int obteneryearNacimiento() const {
        return yearNacimiento;
    }
    float obtenerAltura() const {
        return altura;
    }
    float obtenerPeso() const {
        return peso;
    }

    // Calcula la edad del usuario en year
    int calcularEdad(int yearActual) const {
        return yearActual - yearNacimiento;
    }

    // Calcula la frecuencia cardiaca máxima
    int calcularFrecuenciaCardiacaMaxima(int yearActual) const {
        return 220 - calcularEdad(yearActual);
    }

    // Calcula el índice de masa corporal (BMI)
    // peso en kg divido la altura en metros 
    // kg/altura^2
    double calcularBMI() const {
        return peso / pow((altura),2);
    }
};

int main() {
    // Solicitar información al usuario
    string nombre, primerApellido,sexo;
   
    int dia;
    int mes ;
    int year ;
    float altura;
    float peso ;
    int yearActual;
    cout << "Ingrese su primer nombre: ";
    cin >> nombre;
    cout << "Ingrese su primerApellido: ";
    cin >> primerApellido;
    cout << "Ingrese su sexo (M/F): ";
    cin >> sexo;
    cout<<"Usar espacio para separar los datos"<<endl;
    cout << "Ingrese su fecha de nacimiento (dd mm aaaa): ";
    cin >> dia >> mes >> year;
    cout << "Ingrese su altura en m: ";
    cin >> altura;
    cout << "Ingrese su peso en kg: ";
    cin >> peso;
    cout << "Ingrese el year actual: ";
    cin >> yearActual;

    // Crear una instancia de PerfilMedico
    PerfilMedico perfil(nombre, primerApellido, sexo, dia, mes, year, altura, peso);

    // Imprimir la información del perfil
    
    cout << "\nInformacion del perfil medico:\n";
    cout << "Nombre: " << perfil.obtenerPrimerNombre() << endl;
    cout << "primerApellido: " << perfil.obtenerprimerApellido() << endl;
    cout << "Sexo: " << perfil.obtenerSexo() << endl;
    cout << "Fecha de nacimiento: " << perfil.obtenerDiaNacimiento() << "/"
         << perfil.obtenerMesNacimiento() << "/" << perfil.obteneryearNacimiento() << endl;
    cout << "Altura: " << perfil.obtenerAltura() << " m" << endl;
    cout << "Peso: " << perfil.obtenerPeso() << " kg" << endl;

    // Calcular e imprimir la edad, BMI, frecuencia cardiaca máxima y rango esperado
    cout << "Edad: " << perfil.calcularEdad(yearActual) << " year" << endl;
    cout << "BMI: " << perfil.calcularBMI() << endl;
    cout << "Frecuencia cardiaca maxima: " << perfil.calcularFrecuenciaCardiacaMaxima(yearActual) << endl;
   
system("pause");
    return 0;
}