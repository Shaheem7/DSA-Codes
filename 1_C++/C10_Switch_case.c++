#include<iostream>
using namespace std;
int main(){
    int  n = 1 ;

    switch (n)
    {
    case 1:
        cout<<"First case"<<endl;
        break;
    case 2:
        cout<<"First case"<<endl;
    default:
        cout<< "It's Default case"<< endl;
        break;
    }    
    
    //   Infinite loop 
    while (1)
    {
        
        switch (n)
        {
        case 100 :
            
            exit(0);                    // Exit is used to end an entire programe and come to operating system
        
        default:
            break;

        }
        cout << n << endl;
        n++;
    }

    n = 1;
        while (n<111)
    {
        
        switch (n)
        {
        case 100 :
            
            continue;
        
        default:
            break;

        }
        cout << n << endl;
        n++;
    }
       





}