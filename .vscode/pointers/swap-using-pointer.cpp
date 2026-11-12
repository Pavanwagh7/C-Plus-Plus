#include<iostream>
using namespace std;
void swap (int* a,int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main (){
    int a = 0;
    int b = 3;

    cout << a << " "<< b;
    
    cout<< endl;

    swap(&a,&b);
    cout << a << " "<< b;
}