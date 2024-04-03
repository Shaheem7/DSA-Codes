#include<iostream>
using namespace std;

class CircularQueue{

    public:
    int *arr;
    int size;
    int front , rear;

    // constructor
    CircularQueue(int n){
        size = n;
        arr = new int[size];
        front = rear = 0;
    }

    bool enQueue(int value){
        if ((front==0 && rear == size-1) || (rear == (front-1)%(size-1)))       // full condition 
        {
            return false;
        }
        else if (front == -1 )  // first push condition
        {
            front = rear = 0;
            arr[rear] = value;
        }
        else if ((rear == size-1) && (front != 0))      // ring condition
        {
            rear = 0;
            arr[rear] = value;
        }
        else{                   // normal condition
            rear++;
            arr[rear] = value;
        }
        return true;
    }

    bool dequeue(){

        if (front==-1)      //  to check queue is empty
        {
            return false;
        }
        int ans = arr[front];
        arr[front] = -1;
        if (front == rear){     // single element is present 
            front = rear -1;
        }
        else if (front == size -1)
        {
            front = 0;      // to maintain cyclic nature
        }
        else{
            front++;
        }
        return true;
    }

    int Front() {
        if(isEmpty()){
            return -1;
        }
        return arr[front];
    }
    
    int Rear() {
        if(isEmpty()){
            return -1;
        }
        return arr[rear];
    }
    
    bool isEmpty() {
        if(front==rear){
            return true;
        }
        else{
            return false;
        }
    }
    
    bool isFull() {
        if((rear==size-1) && (rear == (front-1)%(size-1))){
            return true;
        }
        else {
            return false;
        }
    }
};

int main(){


    return 0;
}


