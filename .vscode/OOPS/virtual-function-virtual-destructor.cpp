#include<iostream>
using namespace std;

class BaseClass {
public:
    // BaseClass Constructor
    BaseClass() {
        cout<< "I am the constructor of the Base class.\n";
    }

    // For Run time polymorphism mark the function as virtual 
    virtual void print () {
        cout<< "I am the print() function of BaseClass.\n";
    } 

    // Destructor
    virtual ~BaseClass() { }
};

class DerievedClass : public BaseClass{
public:
    // DerievedClass Constructor
    DerievedClass() {
        cout<< "I am the constructor of the Derieved class.\n";
    }

    void print () {
        cout<< "I am the print() function of DerievedClass.\n";
    } 
};


int main () {
    // BaseClass obj;
    // obj.print();

    // BaseClass* obj1 = new BaseClass();
    // obj1->print();

    // BaseClass* obj = new DerievedClass();
    // obj->print(); 
    
    // delete obj;

    BaseClass* basePtr;
    DerievedClass derievedClassObj; // derievedClassObj is created locally on the stack memory.
    // It is created inside the main it means its scope is only in the main() function.
    // When main() finishes it(derievedClassObj) is automcatically deleted without explicitly calling "delete derievedClassObj" .
    basePtr = &derievedClassObj;
    // Above Three lines simply mean BaseClass* obj = new DerievedClass(); 

    basePtr->print();
}