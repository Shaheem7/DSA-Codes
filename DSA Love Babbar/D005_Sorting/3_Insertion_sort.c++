#include<iostream>
#include<vector>
using namespace std;

void insertionSort(int n, vector<int> &arr){
    for (int i = 0; i < n; i++)
    {
        int temp = arr[i];
        int j = i-1;
        for ( ; j >=0; j--)
        {
            if (arr[j] > temp)
            {
                // shift 
                arr[j+1] = arr[j];
            }
            else{
                break;
            }
        }
        arr[j+1] = temp;
        
    }
    
}


int main(){

    vector <int> arr = {8,7,9,6,2,4,3} ;
    insertionSort(7, arr);

    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << endl;
    }
    

    return 0;
}