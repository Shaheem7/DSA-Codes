#include<iostream>
using namespace std;
int main(){
    int i=1;
    while (i<4)
    {
        int j = 1;
        while (j<4)
        {
            cout<<i+j-1;
            j++;
        }
        cout<<endl;
        i++;
    }
    

    /*
    for this pattern
        ABC
        BCD 
        CDE
    formula    
        i+j-1=1
      --Add (A-1) both sides
        A + i + j - 2 = A
    
    */   
 
    i = 1;
    while (i<4)
    {
        int j = 1;
        while (j<4)
        {
            char ch = 65 + i + j -2;
            cout<<ch;
            j++;
        }
        cout<<endl;
        i++;
    }
  
     /*
    for this pattern
        A
        BC
        DEF
        GHIJ
    */
    int k = 1;
    while (k<10)
    {
        int j=1;
        while (j<k)
        {
            cout<<j;
            j++;
        }
        cout<<endl;
        k++;
    }
    

     
}