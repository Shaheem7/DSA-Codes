#include<iostream>
using namespace std;

#ifndef FILE1_H
#define FILE1_H

///////////////////////////////////////////////   Declaration of a function

class Node{

    public:
    int data;
    Node* next;     // Node* is a pointer that can store the memory address of a Node object.

    // Constructor
    Node(int dat){
        this ->data = dat;
        this ->next = NULL; 
    }
};


void print(Node* head){
    Node* temp = head;

    while (temp != NULL)
    {
        cout << temp ->data << " ";
        temp = temp ->next ;
    }
    cout << endl;
}


/////////////////////

void InsertAtTail(Node* &tail, int d){
    Node* temp = new Node(d);
    tail ->next = temp;
    tail = temp;
}




#endif 