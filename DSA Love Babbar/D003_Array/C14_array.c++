#include<iostream>
using namespace std;

void printarray(int arr[], int size){

    cout << "Printing array " << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    

}

int main(){
    int array[100];

    //To initialize the array with value'1'.
    fill_n(array, 100, 7);

    //To check the array input (kewaal 5 hi kari h print)
    for(int i = 0; i <= 50; i++){
        cout << array[i] << " ";
    }    

    printarray(array, 100);
     
}