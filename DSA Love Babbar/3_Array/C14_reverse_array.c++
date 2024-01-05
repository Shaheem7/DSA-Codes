#include<iostream>
using namespace std;

void printArray(int arr[], int n ){

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void reverseArray(int arr[], int n){

    int start = 0;
    int end = n - 1;
    
    while (start<=end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
    
}


int main(){

    int arr[6] = {1,2,3,4,5,6};
    int brr[5] = {15,-12,7,3,9};


    printArray(arr,6);

    reverseArray(arr,6);
    printArray(arr,6);

     
}