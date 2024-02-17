#include<iostream>
using namespace std;

#include "DLL.h"

void InsertAtTail(Node* &tail, int data){
    Node* temp = new Node(data);
    temp->prev = tail;
    tail->next = temp;

    tail = temp;
}

int main(){

    Node* node1 = new Node(10);

    Node* head = node1;
    Node* tail = node1;

    InsertAtTail(tail,12);
    print(head);

    return 0;
}