#include<iostream>
using namespace std;

#include"insertion.h"

void InsertAtAnyPosition(Node* &head, int position, int data){
    int cnt = 1;
    Node* temp = head;

    while (cnt < position)
    {
        temp = temp->next;
        cnt++;
    }
    
    Node* nodeToinsert = new Node(data);
    nodeToinsert->next = temp->next;
    temp->next = nodeToinsert;
}

int main(){


    Node* node1 = new Node(10);

    Node* head = node1;
    Node* tail = node1;

    for (int i = 12; i < 20; i+=2)
    {
        InsertAtTail(tail, i);
    }
    print(head);

    InsertAtAnyPosition(head, 2, 13);
    print(head);

    return 0;
}