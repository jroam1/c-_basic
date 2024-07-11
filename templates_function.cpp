/*
    Using Templates in C++

    The function uses Templates for a general treatment of
    operations.     
*/
#include <iostream>
// By convention, it's common using T for templates, but is not 
// neccesary: we use "summable" instead.
template <class summable>

// Versión clásica de la función
// Noté que al declarar el uso de template, el compilador
// busca en donde se utiliza dentro del script, si no está en 
// uso genera un error de compilación

// int sum_array_elements(int a[], int size){
//     int sum = 0;
//     for (int i=0; i<size; i++){
//         sum+=a[i];
//     }
//     return sum;
// }


// Generic version
// With this implementation, the function works with all number data type 
// and we dont have to create a int, double, etc... version for the same
// operation. Its a general function to sum array elements.

summable sum_array_elements(const summable a[], int size){
    summable sum = 0;
    for (int i=0; i<size; i++){
        sum+=a[i];
        // += must work for summable
    }
    return sum;
};

int main(){
    int sum = 0;
    int size = 10;
    int a[size] = {1,2,3,4,5,6,7,8,9,10};
    sum = sum_array_elements(a, size);
    std::cout<< "El resultado de la suma es: "<<sum<<'\n';
}