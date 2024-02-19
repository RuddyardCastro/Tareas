#include <iostream>


// Ruddyard Castro 9959-23-1409

int main()
{
    using namespace std;
    int contador;
    int num1;
    int masGrande;
    int segundoMasGrande;
    contador=0;
	num1=0;
	masGrande=0;
	segundoMasGrande=0;
	while(contador<10){
        cout<<"Introdusca un numero: ";
        cin>>num1;
        if (num1>segundoMasGrande){
            masGrande=segundoMasGrande;
            segundoMasGrande=num1;

        }else{
            segundoMasGrande = num1;
        }
        contador=contador+1;
        cout<<"El segundo numero grande es: "<<masGrande <<" y el numero mas grande es: "<<segundoMasGrande <<" la iteracion es: "<<contador<<endl;
	}

}
