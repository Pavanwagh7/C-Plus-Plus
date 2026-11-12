#include<iostream>
using namespace std;

class Scooty {
public:
    string name;
    float avg;
    float topSpeed;
private:
    int bootSpace;
public:
    // Constructors
    Scooty () { }
    Scooty (string name,float avg,float topSpeed) {
        this->name = name;
        this->avg = avg;
        this->topSpeed = topSpeed;
    }
};

class Bike : public Scooty {
public:    
    int gears;

    // Constructor
    Bike () { }
    Bike (string name,float avg,float topSpeed,int gears) {
        this->name = name;
        this->avg = avg;
        this->topSpeed = topSpeed;
        this->gears = gears;
    }
};

int main  (){
    Bike splender("Splender",50.45,120.56,4);
    cout<< splender.name;
}