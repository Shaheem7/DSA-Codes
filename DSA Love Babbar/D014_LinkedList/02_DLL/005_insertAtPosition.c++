#include<iostream>
using namespace std;

#include"DLL.h"

void InsertAtAnyPosition(Node* head, int position, int da){
    Node* temp = head;
    int cnt = 1;
    while (cnt < position)
    {
        temp = temp->next;
        cnt++;
    }
    
    Node* nodeToInsert = new Node(da);
    Node* temp2 = temp->next;

    nodeToInsert->prev = temp;
    temp->next = nodeToInsert;

    nodeToInsert->next = temp2;
    temp2->prev = nodeToInsert;

}


int main(){

    Node* node1 = new Node(10);

    Node* head = node1;
    Node* tail = node1;

    InsertAtTail(tail,12);
    InsertAtTail(tail,14);
    InsertAtTail(tail,16);
    print(head);


    InsertAtAnyPosition(head, 2, 13);
    print(head);

    return 0;
}

