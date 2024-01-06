#include<iostream>
using namespace std;

void reverse_string(char name[],int n){

    int s=0;
    int e=n-1;

    while (s<=e)
    {
        swap(name[s++],name[e--]);

    }
    
}

int main(){

    char name[20];

    cout << "Enter your name: ";
    cin >> name;

    cout << "Name = " ;
    cout << name << endl;

    cout << "Reverse Name = " ;
    reverse_string(name,5);
 




    cout << name << endl;


    return 0;

    

     
}