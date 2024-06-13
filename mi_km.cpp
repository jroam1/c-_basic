/* 
    Miles are converted to Kilometers
    First example use of C++
    Johann Roa
    June, 2024
*/
// iostream es la libreria estándar de C++
// Podemos usar stdio.h de C, pero iostream se considera mejor práctica 
#include <iostream>
using namespace :: std;
// Esta línea nos ahorra el trabajo de escribir std::cout y std::cin
// Es una forma más sofisticada de typedef
const double m_to_k = 1.609;
// Inline es una versión optimizada de los macros en C
inline double convert(int mi){return (mi*m_to_k);}

int main(void){
    int miles = 1;

    while (miles!= 0){
        // cout es la versión C++ de printf, la salida estándar, es mucho más facil de usar puesto que no 
        // requiere las especificaciones de formato de C
        cout << "Input distance in miles or 0 to terminate: ";
        // cin tampoco requiere que se pase la dirección de memoria de la variable que almacenará
        // el valor, como lo exigia scanf en C
        cin >> miles;
        // Esta es la forma de concatenar datos de salida en C++
        // endl es simplemente otra forma de salto de línea, bien podría usarse \n
        cout << "\nDistance is " << convert(miles) << " km." << endl;
    };
    cout << endl;
}