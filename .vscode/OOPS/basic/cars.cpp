#include<iostream>
using namespace std;

class Car {
public:
    string name;
    float price;
    int seats;
    string type;
};

void printCar (Car car) {
    cout << car.name << " " << car.price << " " << car.seats << " " << car.type <<"\n";
}

void change (Car c/* Shallow copy of car object */) {
    c.name = "LCA Tejas";
}

// Pass by reference
void changeName (Car& c) {
    c.name = "LCA Tejas";
}

int main () {
    Car c1;
    c1.name = "Maruti Suzuki";
    c1.price = 20000;
    c1.seats = 5;
    c1.type = "HatchBack";

    printCar(c1); //Output : Maruti Suzuki 20000 5 HatchBack
    change(c1); // Pass by value
    printCar(c1); // Output : Maruti Suzuki 20000 5 HatchBack (No change happened)

    changeName(c1); // pass by refernce
    printCar(c1);

    Car c2;
    c2.name = "Fortuner";
    c2.price = 20000;
    c2.seats = 7;
    c2.type = "SUV";

    Car c3;
    c3.name = "Ford Endvour";
    c3.price = 20000;
    c3.seats = 7;
    c3.type = "SUV";

    Car c4;
    c4.name = "Honda City";
    c4.price = 20000;
    c4.seats = 5;
    c4.type = "Sedan";

    // printCar(c1);  // Pass by Value
    // printCar(c2);  // Pass by Value
    // printCar(c3);  // Pass by Value
    // printCar(c4);  // Pass by Value

}