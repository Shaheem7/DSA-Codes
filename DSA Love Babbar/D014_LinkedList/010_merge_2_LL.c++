#include<iostream>
using namespace std;
#include<C:\Users\Shaheem Mushtaq\Desk env\DSA & ALGO\DSA Codes\DSA Love Babbar\D014_LinkedList\01_SLL\insertion.h>


// class Node{

//     public:

//     int data;
//     Node* next;

//     Node(int da) {
//         this ->data = da;
//         this ->next = NULL;
//     }

// };

Node* mergeInBetween(Node* list1, int a, int b, Node* list2) {
    int i = 0;
    Node *temp = list1;
    Node *abb = NULL;
    Node *baa = NULL;

    while (i<a)
    {
        temp = temp->next;
        i++;
    }
    abb->next = temp->next;

    while (i<b)
    {
        temp = temp->next;
        i++;
    }
    baa->next = temp->next;
    
    abb->next = list2;
    Node* temp2 = list2;
    while (temp2->next != NULL)
    {
        temp2 = temp2->next;
    }
    temp2->next = baa->next;

    return list1;
    
    
}


int main(){

    Node* list1 = new Node(10);
    Node *head1 = list1;
    Node *tail1 = list1;

    InsertAtTail(tail1, 1);
    InsertAtTail(tail1, 13);
    InsertAtTail(tail1, 6);
    InsertAtTail(tail1, 9);
    InsertAtTail(tail1, 5);


    Node* list2 = new Node(1000);
    Node *head2 = list2;
    Node *tail2 = list2;

    InsertAtTail(tail2, 1001);
    InsertAtTail(tail2, 1002);
    
    print(head1);
    print(head2);

    Node *abb = mergeInBetween(list1, 2, 5, list2);
    cout << "Data " << abb->data;

    return 0;
}