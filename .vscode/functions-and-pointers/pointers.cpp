#include<iostream>
using namespace std;
int main () {
    int x = 10;
    cout<< x << endl;// Print the value of variable x.

    cout<< &x << endl; // Print address of variable x.

    int* ptr = &x; // Store and address of variable x.
    cout<< ptr << endl; // Print address of variable x stored in pointer varibale ptr.

    cout<< *ptr << endl; // *ptr is Dereference operator

    
    *ptr = 100; // And now you can modify the value of x using the pointer(Dereference operator) if the x;
    cout<< x << endl; 
}