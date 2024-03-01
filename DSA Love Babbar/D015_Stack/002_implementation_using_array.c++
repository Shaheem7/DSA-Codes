#include<iostream>
using namespace std;

class stack {
    // properties 
    public:
    int *arr; 
    int top;
    int size;

    // behavior or constructor
    stack(int size){
        this->size = size;
        arr = new int[size];
        top = -1;
    }

    // functions

    void push(int element){
        if (size - top > 1)
        {
            top++;
            arr[top] = element;
        }
        else{
            cout << "Stack overflow" << endl;
        }   
    }

    void pop(){
        if (top >= 0)
        {
            top--;
        }
        else{
            cout << "Stack underflow" << endl;
        }
    }

    int peek(){
        if (top>=0 && top<size)
        {
            return arr[top];
        }
        else {
            cout << "Stack is empty" << endl;
        }
    }

    bool isEmpty(){
        if (top ==-1) return true;
    
        else return false;
    }


};


int main(){


    return 0;
}