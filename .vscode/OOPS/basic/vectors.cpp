#include<iostream>
using namespace std;
class Vector{
public:
    int size;
    int capacity;
    int* arr;

    // Constructors
    Vector () {
        size = 0;
        capacity = 1;
        arr = new int[capacity];
    }

    void add (int ele) {// adds the element in the last
        if (size == capacity) { // Create new array arr2 with Double the capacity of arr.
            capacity = 2 * capacity;
            int* arr2 = new int[capacity];
            
            // Copy elements from arr to arr2
            for (int i = 0; i < size;i++) arr2[i] = arr[i];

            arr = arr2;
        }
        arr[size++] = ele;
    }

    void remove () { // Remove element from the last
        if (size > 0) { 
            size--;
        }    
    }

    int get (int index) {
        if(index > size || index < 0) {
            cout<< "Invalid index.\n";
            return -1;
        }
        return arr[index];
    }
    void print () {
        cout<< "[";
        for (int i = 0; i < size;i++){
            if (i == size - 1){
                cout<< arr[i] << "]";
                cout<< "\n";
                return;
            }
            cout<< arr[i] << ", ";
        }
    }


};

int main () {
    Vector v;
    v.add(1);
    v.add(2);
    v.add(3);
    v.add(4);
    v.add(5);
    v.add(6);
    v.print();
    v.remove();
    v.remove();
    v.remove();
    v.print();

    cout<< v.get(0);
}