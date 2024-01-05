#include<iostream>
using namespace std;

void printarray(int arr[], int size){
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}

int main(){

    int ar[10] = {1,22,45,78,13,49,89};

    printarray(ar, 8);



    return 0;

}

