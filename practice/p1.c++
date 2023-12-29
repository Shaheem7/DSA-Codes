#include<iostream>
using namespace std;

int main(){

    cout << "Hello World " << endl ;

    for (int  i = 0; i < 4; i++)        // Row 
    {
        for (int i = 1; i < 5; i++)     // Column
        {
            cout << i;
        }
        cout <<endl;
    }
    cout << "\n";



    return 0;
}
