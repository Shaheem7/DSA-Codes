#include<iostream>
using namespace std;

#include"DLL.h"

void InsertionAtMid(Node* head, Node* tail, int da){
    Node* temp = new Node(da);
    
    head->next = temp;
    temp->prev = head;
    tail->prev = temp;
    temp->next = tail;

}

int main(){

    Node* node1 = new Node(10);

    Node* head = node1;
    Node* tail = node1;

    InsertAtTail(tail,12);
    print(head);

    InsertionAtMid(head, tail, 11);
    print(head);


    return 0;
}


