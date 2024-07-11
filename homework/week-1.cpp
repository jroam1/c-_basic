/*
    C++ version of a C program:
    * Change -stdio- to -iostream-
    * Change to one line comments
    * Change macro define to const
    * Change array to vector
    * Use of inline functions
     
    Johann Roa
    July 2024
*/

#include <iostream>
#include <vector>

const int N=40;

inline void sum(int& accum, std::vector<int> data){ // We use pass-by-reference to modify directly the accum argument
    accum = 0;
    for (int i=0; i<data.size(); i++){
        accum+=data[i];
    }
}

int main(){
    int accum;
    std::vector<int> data;

    // The array is filled
    for (int i=0; i<N; i++){
        data.push_back(i); // We use the push_back method to append elements to the vector
    };
    // std::cout<<"Size of the array: "<<data.size()<<std::endl;

    // Sum the elements
    sum(accum, data);
    std::cout<<"Sum is: "<<accum<<std::endl;
}