#include<iostream>
using namespace std;

bool search(int arr[], int size, int key){

    for (int i = 0; i < size; i++)
    {
        if (arr[i] == key)
        {
            return 1;
        }
        
    }
    return 0;
}



int main(){


    int arr[10] = {21, -12, 13, 52, 17, 81, -14, 45 ,15, 48}; 
    cout << "Enter the key " << endl;

    int key;
    cin >> key;

    bool found = search(arr, 10, key);
    if (found)
    {
        cout << "Key present !";
    }
    else{
        cout << "Key absent !";
    }

     
}