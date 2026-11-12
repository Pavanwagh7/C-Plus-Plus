#include<iostream>
using namespace std;

int nFact (int n) {
    if (n == 0) return 1;
    return n * nFact(n-1);
}

int main () {
    cout<< nFact(12);
}