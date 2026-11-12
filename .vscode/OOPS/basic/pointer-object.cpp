#include<iostream>
using namespace std;

class Cricketer {
public:
    string name;
    int runs;
    float avg;
    
    // Constructors
    Cricketer () {}
    Cricketer (string name,int runs,float avg) {
        this->name = name;
        this->runs = runs;
        this->avg = avg;
    }

    void printCricketer () {
        cout<< this->name << " | " << this->runs << " | " << this->avg << endl;
    }

};

int main () {
    Cricketer c1("Virat Kohali",25000,57.78);
    Cricketer c2("Rohit Sharma",20000,49.56);

    c1.printCricketer();
    c2.printCricketer();


    // now store the address of c1 in pointer variable
    Cricketer* ptr1 = &c1;
    cout << ptr1 <<endl;
    cout<< (*ptr1).name << " | " << (*ptr1).runs << " | " << (*ptr1).avg <<endl; // Derefernce operator is used

    // now store the address of c2 in pointer variable
    Cricketer* ptr2 = &c2;
    cout << ptr2 <<endl;
    (*ptr2).runs = 15000;
    cout<< (*ptr2).name << " | " <<(*ptr2).runs; 
}