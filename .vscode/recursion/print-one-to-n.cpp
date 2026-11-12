#include<iostream>
using namespace std;

void printOneToN (int n) {
    if (n == 0) return;
    printOneToN(n-1);
    cout<< n << "\n";
    
}
void printNToOne (int n) {
    if (n == 0) return;
    cout<< n << "\n";
    printNToOne(n-1);
}

int main () {
    printOneToN(5);
    printNToOne(5);
}