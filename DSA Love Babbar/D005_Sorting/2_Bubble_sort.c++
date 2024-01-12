#include<iostream>
using namespace std;
int main(){

    int n = 6;
    int arr[6] ={15, 225, 12 ,23, 3, 4};

    for (int i = 1; i < n; i++)
    {
        // for rounds 1 to n-1
        for (int j = 0; j < n-i; j++)
        {
            if (arr[j]>arr[j+1])
            {
                swap(arr[j],arr[j+1]);
            }
            
        }
        
    }
        
     
}


#include<iostream>
using namespace std;
int main(){

    int n = 6;
    int arr[6] ={15, 225, 12 ,23, 3, 4};

    bool swapped = false;

    for (int i = 1; i < n; i++)
    {
        // for rounds 1 to n-1
        for (int j = 0; j < n-i; j++)
        {
            if (arr[j]>arr[j+1])
            {
                swap(arr[j],arr[j+1]);
                swapped = true;    //  for already sorted array, if never executes
            }
            if (swapped==false)     // best case scenario (complexity - O(n) )
            {
                break;
            }
            
        }
        
    }
        
     
}