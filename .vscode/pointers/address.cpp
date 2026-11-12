#include<iostream>
using namespace std;
int main () {
    int x = 10;
    cout << &x; // It prints the address of x.

    cout << "\n";

    // store the address of the integer variable x
    int* address_of_X = &x;
    cout << address_of_X; 

    cout << "\n";

    float floatValue = 3.1415;
    float* address_of_floatValue = &floatValue;
    cout << address_of_floatValue;
    cout<< endl;

    // dereferncing
    // now print the value stored at the provided address
    cout<< address_of_X << " -> " << *address_of_X; 
    cout<< endl;
    cout<< address_of_floatValue << " -> " << *address_of_floatValue; 

}