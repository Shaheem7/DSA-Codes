#include<iostream>
using namespace std;

void print(int *p){         // print address
    cout << p << endl;
}

void update(int *p){        // you can’t update the address stored in pointer by calling a function but you can update the value stored on that address
    p = p + 1;
    cout << "internal p - " << p << endl;

}

int getSum(int *arr, int n){     // (int arr[], int n)  both are same, both points to first address
    int sum=0;
    for (int  i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    return sum;
}


int main(){

    int value = 5;
    int *t = &value ;
    print(t);

    cout<< "before - " << t << endl;
    update(t);
    cout<< "after - " << t << endl;


    int arr[6] = {1,2,3,4,5,6};
    cout << "sum of array elements is : " << getSum(arr,6) << endl;

    cout << "sum of array elements from 3 to 6 is : " << getSum(arr + 3,3) << endl;
     
}