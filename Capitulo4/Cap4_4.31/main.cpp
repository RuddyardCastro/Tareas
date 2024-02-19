#include <iostream>
// Instruccion co error
// Ruddyard castro 9959-23-1409
using namespace std;

int main()
{
  // El error de cout<<++(x+y); es que no se puede aplicar a abmos
  // Solucion
  int x;
  int y;
  int suma ;
  x=2;
  y=2;
  suma=0;
  suma=x+y;
  ++suma;
  cout<<suma<<endl;
}
