#include<iostream>
using namespace std;

class Student {
public: 
    string name;
    int age;
private:
    float cgpa;
public:
    // Constructors
    Student () {}
    Student (string name,int age,float cgpa) {
        this->name = name;     
        this->age = age;
        this->cgpa = cgpa;
    }

    // Getters and Setters
    string getName () {
        return this->name;
    }
    void setName (string name) {
        this->name = name;
    }

    int getAge () {
        return this->age;
    }
    void setAge (int age) {
        this->age = age;
    }

    float getCgpa () {
        return this->cgpa;
    }
    void setCgpa (float cgpa) {
        this->cgpa = cgpa;
    }

    void displayStudent () {
        cout<< name << " | " << age << " | " << cgpa << "\n";
    }
};

int main () {
    Student pavan;
    pavan.name = "Pavan";
    pavan.age = 23;
    // s.cgpa = 9.00; // You can't do that cgpa is private field
    pavan.displayStudent(); // Garbage value for cgpa will printed

    Student saurav("Saurav",22,9.99);
    saurav.displayStudent(); // print saurav
    saurav.setName("Saurav Jamadar");
    saurav.setAge (23);
    saurav.setCgpa(8.85);
    saurav.displayStudent();//print saurav after modification in saurav
}