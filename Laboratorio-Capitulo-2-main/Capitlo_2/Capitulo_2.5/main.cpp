// Este programa calcula el producto de tres enteros

#include <iostream>

int main() {
  // Declaración de variables
  int x = 0; // Primer entero a multiplicar
  int y = 0; // Segundo entero a multiplicar
  int z = 0; // Tercer entero a multiplicar
  int resultado = 0; // El producto de los tres enteros

  // Pedir datos al usuario
  cout << "Escriba tres enteros: ";
  cin >> x >> y >> z;

  // Calcular el producto
  resultado = x * y * z;

  // Imprimir el resultado
  cout << "El producto de " <<x<<" * "<<y<<" * "<<z<<" es "<< resultado << endl;

  return 0;
}
