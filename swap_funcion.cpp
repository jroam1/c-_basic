/*
    Differences between a swap function in C and C++
    
    Swap function is an example of call by reference.
    It interchanges (swaps) the values of two variables 
    with each other using pointers.
*/

// In C we had:
// void swap(int *i, int *j){ // We declare the arguments like pointers
//     int temp = *i; // We use dereference operator to access the value of the variable
//     *i = *j; // So contents is being moved between two addresses.
//     *j = temp;       
// }
/*
    In C each function in a given scope most have a unique name (no function overloading)
    So I cannot have a "general" swap function. I have to define them induvidually 
    according the data type.
*/
// For example, to swap two doubles I have:
// void swap_double(double *i, double *j){ 
//     double temp = *i; 
//     *i = *j; 
//     *j = temp;       
// }
/*
    Remember, we always have call-by-value in C. In this language we use pointers to simulate a call-by-reference.
*/

#include <iostream>
using namespace :: std;

// In C++ we have:
inline void swap(int& i, int&j){ // We declare the arguments like references
    int temp = i;
    i = j; // So we can use them directly and they will be modified by the function
    j = temp;
}

/*
    C++ has call-by-reference and call-by-value. Then, we can decide which one is
    more appropiate in each case and use it. References is the way to use call-by-reference in C++.
*/

inline void swap(double& i, double& j){
    double temp = i;
    i = j;
    j = temp;
}

/*
    C++ has overloading too. Therefore, it is possible to have multiple functions with the same name and different
    implementations and we wont have a syntax error (as in C or Python could happen). 
    In C++ each function definition have a signature (we call signature matching algorithm), composed of the types and the number of arguments, so that the compiler
    can distinguish each function from another. In this case, it knows which swap function to use according to the type of arguments.
*/

int main(){
    int m=5,n=10;
    double x=5.3, y=10.6;
    cout << "Inputs:"<<m<<","<<n<<endl;
    swap(m,n);
    cout << "Outputs:"<<m<<","<<n<<endl;
    cout << "Double inputs:"<<x<<","<<y<<endl;
    swap(x,y);
    cout << "Double outputs:"<<x<<","<<y<<endl;
}