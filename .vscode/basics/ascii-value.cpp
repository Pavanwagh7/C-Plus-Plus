#include<iostream>
using namespace std;
int main () {
    cout << "-- ASCII Codes of Charaters --\n";
    char ch;
    cout << "char ch  = ";
    cin >> ch; // After this Automatic new lines comes
    cout<< "Ascii value is : " << (int)ch << "\n";

    cout << "-- Provide Ascii code and get Charater --\n";
    int asciiCode;
    cout << "Provide ASCII code = ";
    cin >> asciiCode;
    cout << "Chaaractor is : " << (char)asciiCode;
}