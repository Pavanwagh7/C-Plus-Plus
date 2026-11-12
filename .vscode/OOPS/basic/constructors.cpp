#include<iostream>
using namespace std;

class Account {
    public:
        string name;
        float balance;

    // Constructors
    Account() {
        
    }
    Account (string name,float balance) {
        this->name = name;
        this->balance = balance;
    }
};

void print (Account account){
    cout<< account.name << " " << account.balance << "\n";
}

int main () {
    Account a1 ("Pavan Wagh", 90000.67);
    print(a1);

    // Copy constructor
    Account a2 = a1; // Deep Copy
    // print(a2);
    a2.name = "Manish";
    print(a2);

    //Another way
    Account a3(a1); // Deep Copy
    print(a3);
    a3.name = "Saurav";
    print(a3);
    

}