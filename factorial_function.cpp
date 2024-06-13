#include <iostream>
using namespace :: std;

// long long -> Es una extensión del tipo int en C++
// En este caso se hace necesario debido al "overflow int" (superar el límite de bytes de almacenamiento para un int)
// que se da al operar con factoriales. Así contamos con el suficiente espacio de almacenamiento para los resultados. 
long long fact(int n){

    long long f = 1;
    for (int i=1; i<= n; i++){
        f*=i;
    }
    return f;
};

int main(void){
    cout << "This program uses some features not in C89\n";

    for (auto i=0; i<16; i++){
        cout << "Factorial of " << i << " is " << fact(i) << endl;
    }

    cout << "Thats all folks!" << endl;
}

