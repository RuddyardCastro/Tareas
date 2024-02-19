#include <iostream>
using namespace std ;
int main() {
    // \t es el tabulador que brinda efecto de coluna
    cout << "Numero\tCuadrado\tCubo\n";
    int i;
    i=0;
    for (i; i <= 10; ++i) {
        cout << i << '\t' << i * i << '\t' << i * i * i << '\n';
    }

    return 0;
}
