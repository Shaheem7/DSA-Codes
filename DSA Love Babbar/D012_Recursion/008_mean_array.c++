#include<iostream>
using namespace std;

float mean(int arr[], int n){
    // base case 
    if (n==0){
        return arr[0];
    }
    // recursive case
    // cout << "Mean = " << (mean(arr, n-1)*(n-1) + arr[n-1])/n << endl; 
    float ans = (mean(arr, n-1)*(n-1) + arr[n-1])/n;
    return ans;
}


int main(){

    int arr[] = {1,2,3};
    int n = sizeof(arr)/sizeof(int);
    cout << "Mean of the array is : " << mean(arr, n) << endl;
  

    return 0;
}