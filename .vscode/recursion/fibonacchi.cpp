#include<iostream>
using namespace std;

int fibo (int n) {
    if (n == 1) return 0; // fibo (1) = 0
    if (n == 2) return 1; // fibo (2) = 1
    return fibo(n-1) + fibo(n - 2);
}

int main () {
    cout<< fibo(50);
}
