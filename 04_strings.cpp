#include <iostream>
using namespace std; 

int main() {
    string phrase = "Hello"; 
    cout << phrase + "\n";
    cout << phrase.length() << endl; // 5
    cout << phrase[0] << endl; // 'H'
    phrase[0] = 'B'; 
    cout << phrase << endl; // "Bello"
    cout << phrase.find("lo", 0) << endl; // the string occurr after which index // 3
    cout << phrase.find('o', 6) << endl; // 18446744073709551615
    cout << phrase.substr(2, 2) << endl; // take the sub-section of the string // start index, string length
    cout << phrase.substr(3, 6) << endl;
    
    return 0;
}