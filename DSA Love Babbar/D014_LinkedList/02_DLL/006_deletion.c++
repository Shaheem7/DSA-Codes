#include<iostream>
using namespace std;

#include"DLL.h"

void deletionByPosition(Node* head, int position){
    Node* temp = head;
    int cnt = 1;

    while (cnt < position)
    {
        temp = temp->next;
        cnt++;
    }
    Node* delNode = temp->next;
    Node* nextNode = delNode->next;

    temp->next = nextNode;
    nextNode->prev = temp;
}

int main(){

    Node* node1 = new Node(10);

    Node* head = node1;
    Node* tail = node1;

    InsertAtTail(tail,12);
    InsertAtTail(tail,14);
    InsertAtTail(tail,16);
    print(head);

    deletionByPosition(head, 2);
    print(head);

    return 0;
}