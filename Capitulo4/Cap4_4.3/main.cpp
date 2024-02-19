#include <iostream>
// Prgrograma realizado por Ruddyard Castro 9959-23-1409
using namespace std;

int main()
{
    /*
   // a)
   int X;
   int Y;
   int Z;
   X=1;
   Y=2;
   Z=0;
  Z=X+Y;
  ++X;
  Z=X+Y;
  cout<<"El valor final de Z "<<Z<<" El valor final de X "<<X<<endl;*/
  // b) Determinar si cuenta es maoyr a diez
  /*
      int cuenta;
      cuenta=0;
      cout<<"Ingrese el valor entero a evaluar=>"<<endl;
      cin>>cuenta;
    if (cuenta>10){
        cout<<"Cuenta es mayor a diez"<<endl;
    }
    else{
        cout<<"Cuenta es menor o igual a 10"<<endl;
    }
*/
    //c)Predecrementar la variable x en 1 luego restarla variable total
    /*
    int x;
    int total;
    x=2;
    total=5;
    --x;
    total=total-x;
    --x;
    total=total-x;
    cout<<"El valor final de x " <<x<< " El valor final de total " << total <<endl;*/
    // d) // Calcular el residuo despues de dvidir q entre divisor y asigna resultado  a q
    // De dos formas distntas
    // Forma 1
   /* int q;
    int  x;
    float residuo;
    cout<<"Ingrese un valor "<<endl;
    cin>>q;
    cout<<"Ingrese otro valor "<<endl;
    cin>>x;
     q= q%x;
     cout<<"El nuevo valor de q es: "<<q<<endl;*/
     // Forma 2
     int q;
    int  x;
        cout<<"Ingrese un valor "<<endl;
    cin>>q;
    cout<<"Ingrese otro valor "<<endl;
    cin>>x;
     q%=x;
     cout<<"El nuevo valor de q es: "<<q<<endl;
}
