#include <iostream>
using namespace std; 

int main() {
    string name;
    cout << "Enter your name1: "; // age
    getline(cin, name); 
    cout << "Hello " << name << endl; 

    cout << "Enter your name2: "; // age
    getline(cin, name); 
    cout << "Hello " << name << endl; 

    // cin >> age; // int, double, char
    // cout << "You are " << age << " years old. " << endl; 

    return 0; 
}