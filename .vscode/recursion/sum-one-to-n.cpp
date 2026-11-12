#include<iostream>
using namespace std;

int sumOneToN (int n) {
    if( n == 0) return 0;
    return n + sumOneToN(n-1);
}

int main () {
    cout<< sumOneToN(5);
}