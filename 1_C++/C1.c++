#include<iostream>
using namespace std;

int main(){

    cout << "Hello world " << endl ;

    int a = 123;
    char b = 'Q';
    bool c = true;
    float d = 1.2;
    double e = 1.23;

    cout << a << endl;
    cout << b << endl;
    cout << c << endl;
    cout << d << endl;
    cout << e << endl;

    int size = sizeof(a);
    cout << "Size of a is " << size << endl;
    cout << sizeof(a) << endl;

    cout << int('a') << endl;

    cout << char(98) << endl;
    cout << char(123456) << endl;
    cout << char(123457) << endl;
    cout << char(123458) << endl;

    unsigned int a1 = 123;
    cout << a1 << endl;
    unsigned int a2 = -123;
    cout << a2 << endl;

// OPerators
    cout << 2/5 << endl;            // int/int --> int
    cout << (2.0 /5) << endl;       // float/int --> float

    cout << (5==6) << endl;         // '0' for false 
    cout << (5<6) << endl;          // '1' for true 

    cout << bool(5==6) << endl;         
    cout << bool(5<6) << endl;

    int a3 = 21;
    cout << !a3 << endl;   

}