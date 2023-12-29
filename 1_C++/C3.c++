#include<iostream>
using namespace std;
int main(){                           //  ASCII VALUES CODE
     
    // cout << int('a') << endl;

    // cout << char(98) << endl;

    char x;
    cin >> x;

    int X = int(x);

    if (48<=X && X<=57){

        cout << "Input is a number. Having ASCII value - " << X <<endl;
    }

    else if (65<=X && X<=90){

        cout << "Input is an Uppercase. Having ASCII value - " << X <<endl;
    }

    else if (97<=X && X<=122){

        cout << "Input is a Lowercase. Having ASCII value - " << X <<endl;
    }
    else{

        cout << "Bad Input" << endl;
    }


}