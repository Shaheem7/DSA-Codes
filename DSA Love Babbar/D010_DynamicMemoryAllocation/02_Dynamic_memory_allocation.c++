#include<iostream>
using namespace std;

int getSum(int *arr, int n) {

    int sum = 0;
    for(int i=0; i<n; i++) {
        sum += arr[i];
    } 
    return sum;
}

int main() {

    int n;
    cin >> n;
    
    //variable size array
    int* arr = new int[n];

    //taking input n in aray
    for(int i=0; i<n; i++) {
        cin >> arr[i];
    }

    int ans = getSum(arr, n);

    cout << "answer is "<< ans << endl;


//case 1        Static
    while(true) {      
        int i = 5;           // memory required for only 1 int, because for each iteration memory i is deleted and then assigned again
    }
    
//case 2        Dynamic
    while(true) {
        int* ptr = new int;
    }




    return 0;
}