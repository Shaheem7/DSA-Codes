#include<iostream>
using namespace std;
int main(){
    int n, i=2, p=0;
    cin >> n;

    while (i<n)
    {
        if (n%i==0){
            cout << "Not prime" << endl;
            p = 1;
            break;
        }
       
        i++;
    }
    if (p=0)
    {
        cout << "Prime" << endl;
        
    }
    

     
     
}