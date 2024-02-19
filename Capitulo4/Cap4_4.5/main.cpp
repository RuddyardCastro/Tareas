#include <iostream>

using namespace std;

int main()
{
    // Usar un while para calcular la suma de los numeros de l al 10
   unsigned int suma=0;
   unsigned int x=1;
   while (x<11)
   {
    suma+=x;
    ++x;
   }

   cout<<"la suma es: "<<suma<<endl;

}

