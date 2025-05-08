#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int wnum = 5; 
    double dnum = 5.5; 

    wnum++; 
    cout << wnum << endl; // 6

    wnum--; 
    cout << wnum << endl; // 5

    cout << 10 / 3 << endl; // 3 // coz using two int

    cout << pow(2, 5) << endl;  // 2^5
    cout << sqrt(4) << endl; // 2
    cout << round(2.57) << endl; // 3
    cout << ceil(2.43) << endl; // 3
    cout << floor(2.43) << endl; // 2
    cout << fmax(10, 23) << endl; // return the maximum num // 23
    cout << fmin(10, 23) << endl; // return the minimun num // 10

    return 0;
}