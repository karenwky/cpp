#include <iostream>
using namespace std; 

string name = "Meow"; 
int age = 2; 

int main() {
    cout << "The cat is named " << name << "." << endl; 
    cout << "It is " << age << " years old." << endl;

    name = "Mimi"; 
    cout << "The cat name is changed to " << name << "." << endl; 

    return 0; 
}