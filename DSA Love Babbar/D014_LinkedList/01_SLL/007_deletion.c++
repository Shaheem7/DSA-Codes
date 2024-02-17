#include<iostream>
using namespace std;

#include"insertion.h"

void deleteByPostion(Node* head, int postion){
    int cnt = 1;
    Node* temp = head;

    while (cnt < postion)
    {
        temp = temp->next;
        cnt++;
    }
    
    Node* delNode = temp->next;
    temp->next = delNode->next;
}

void deleteByValue(Node* head, int value){
    Node* temp = head;
    Node* prev;

    while (temp->data!=value)
    {
        prev = temp;
        temp = temp->next;   
    }
    Node* delNode = prev->next;
    prev->next = delNode->next;
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

    deleteByPostion(head, 2);
    print(head);

    deleteByValue(head, 16);
    print(head);

    return 0;
}