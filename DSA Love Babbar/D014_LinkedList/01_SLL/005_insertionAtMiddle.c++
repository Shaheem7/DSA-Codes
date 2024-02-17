#include<iostream>
using namespace std;

#include"insertion.h"

void InsertAtMiddle(Node* &head, Node* tail, int d){
    Node* temp = new Node(d);
    head ->next = temp;
    temp ->next = tail;


    
}


int main(){

    Node* node1 = new Node(10);
    
    Node* head = node1;
    Node* tail = node1;
 
    InsertAtTail(tail, 12);

    InsertAtMiddle(head, tail, 11);


    print(head);





    return 0;
}