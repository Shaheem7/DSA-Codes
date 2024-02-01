#include<iostream>
using namespace std;

int sumOfArray(int arr[], int n){
    if (n==1){
        return arr[0];
    }
    return arr[n-1] + sumOfArray(arr, n-1);
}

int main(){
    int arr[] = {15, 12, 13, 10};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<sumOfArray(arr, n);

    return 0;
}