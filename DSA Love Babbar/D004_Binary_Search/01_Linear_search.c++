#include<iostream>
using namespace std;


int LinearSearch(int arr[], int size, int k){

    for (int i = 0; i < size ;i++)
    {
        if (arr[i]==k)
        {
            return i;
        }
    }
    
}


int main(){

    
    int arr[6] = {7,5,9,4,3,8};
    int size = 6;

    int index = LinearSearch(arr, size, 8);
    cout << "Index of element K is " << index << endl;


    return 0;
}