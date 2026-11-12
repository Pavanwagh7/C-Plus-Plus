#include<iostream>
using namespace std;
int main () {
    cout<< "Provide a number : ";
    int i;
    cin>> i;

    if (i % 2 == 0) cout<< i << " is an Even number.";
    else cout<< i << " is an Odd number.";
}