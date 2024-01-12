#include<iostream>
using namespace std;

void printArray(int arr[], int n ){

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}


void swapArray(int arr[], int n ){

    int start = 0;
    // for odd
    if (n%2==1)
    {
        while (start<5-1)
        {
            swap(arr[start],arr[start+1]);
            start = start + 2;
        }   
    }
    //  For even 
    else
    {
        while (start<5)
        {
            swap(arr[start],arr[start+1]);
            start = start + 2;
        }  
    }
 
}



int main(){

    int arr[6] = {1,2,3,4,5,6};
    int brr[5] = {1,2,3,4,5};

    printArray(arr,6);
    swapArray(arr,6);
    printArray(arr,6);

    cout << endl;
    

    printArray(brr,5);
    swapArray(brr, 5);
    printArray(brr, 5);
     
}
                                                //  Another Method
// int main(){

//     int arr[10] = {1,2,3,4,5,6};
//     int i = 0;

//     while (i < 6)
//     {
//         int temp = arr[i];
//         arr[i] = arr[i+1];
//         arr[i+1]=temp ;
//         i=i+2;
//     }
//     printarray(arr,6);
    
//     return 0;
// }