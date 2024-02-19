#include <iostream>
// Uso year porqu años no se puede
// Uso size por que la poblacion no se duplico
// Fuente usada : worldometers
// Ruddyard Castro 9959-23-1409
using namespace std;

int main()
{
 long long int poblacionMundial =8100000000;
  const float tasaDeCrecimiento =0.0091;
  long long int poblacionactual=poblacionMundial;

cout<<"Year"<<"\t"<<"Size de pobalcion"<<"\t"<<"Aumento de poblacion"<<endl;
  for (int i=1;i<75;i++){


        poblacionMundial=poblacionMundial+(poblacionMundial*tasaDeCrecimiento);

        poblacionactual=poblacionMundial-poblacionactual;



        cout<<i<<"\t"<<poblacionMundial<<"\t""\t"<<poblacionactual<<"\n"<<endl;

  }
if  (poblacionMundial==(2*poblacionMundial)){

    cout<<"La poblacion se duplico"<<endl;
}else {
 cout<<"La poblacion no  se duplico"<<endl;
}
}
