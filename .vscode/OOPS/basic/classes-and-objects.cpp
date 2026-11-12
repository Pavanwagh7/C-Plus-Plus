#include<iostream>
using namespace std;

class Student {
public: 
    string name;
    int age;
    float cgpa;
};

int main() {
    cout<< "My Name is Pavan, I am here to learn OOPS\n";

    Student pavan;
    pavan.name = "Pavan";
    pavan.age = 23;
    pavan.cgpa = 6.45;
    cout<< "Name = " << pavan.name << ", Age = " << pavan.age <<", CGPA = " << pavan.cgpa << "\n";

    Student kunal;
    kunal.name = "Kunal";
    kunal.age = 28;
    kunal.cgpa = 9.23;
    cout<< "Name = " << kunal.name << ", Age = " << kunal.age <<", CGPA = " << kunal.cgpa;
}