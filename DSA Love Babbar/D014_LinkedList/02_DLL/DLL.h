#ifndef FILE1_H
#define FILE1_H
        
///////////////////////////////////////////////   Declaration of a function
#include<iostream>
using namespace std;

class Node {

    public:

    int data; 
    Node* next;
    Node* prev;

    Node(int da){
        this-> data = da;
        this-> next = NULL;
        this-> prev = NULL;
    }
};

void InsertAtHead(Node* &head, int data){

    Node* temp = new Node(data);
    temp->next = head;
    head->prev = temp;

    head = temp;
}

void InsertAtTail(Node* &tail, int data){
    Node* temp = new Node(data);
    temp->prev = tail;
    tail->next = temp;

    tail = temp;
}

void print(Node* &head){
    Node* temp = head;

    while (temp!=NULL)
    {
        cout << temp->data << " ";
        temp = temp->next; 
    }
    cout << endl;
    
}      

#endif