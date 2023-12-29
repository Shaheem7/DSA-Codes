#include<iostream>
using namespace std;

bool search(int arr[],int size ,int key){

    for (int i = 0; i < size ; i++)
    {
        if (arr[i]==key)
        {
            return 1;
        }
        
    }
    return 0;
}


int main(){
    int arr[10] = {21, -12, 13, 52, 17, 81, -14, 45 ,15, 48}; 

    cout << search(arr,10,48);
   
    return 0;
}
  