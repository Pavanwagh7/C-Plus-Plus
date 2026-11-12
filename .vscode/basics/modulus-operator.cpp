#include<iostream>
using namespace std;
int main () {
    
    int a = 10,b = 20;
    
    // Rule 1: a % b = a if a < b
    cout<< "Rule 1: a % b = a if a < b" << endl << "eg. ";
    cout<< "a = " << a << ", b = " << b << endl << "a % b = " << (a % b) << endl;

    cout<< endl; 

    // Rule 2: a % a = 0 
    cout<< "Rule 2: a % a = 0" << endl << "eg. ";
    cout<< "a = " << a << endl << "a % a = " << (a % a) << endl;

    cout<< endl;

    // Rule 3: a % (-b) = a % b   
    cout<< "Rule 3: a % (-b) = a % b" << endl << "eg. ";
    cout<< "a = " << a << ", b = "<< b << endl << "a % (-b) = " << (a % -b) << endl;

    cout<< endl;

    // Rule 4: (-a) % b = -(a % b)   
    cout<< "Rule 4: (-a) % b = -(a % b)" << endl << "eg. ";
    cout<< "a = " << a << ", b = "<< b << endl << "-a % b = " << (-a % b);
}