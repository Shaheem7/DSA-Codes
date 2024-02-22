
#include<iostream>
using namespace std;


class Node{

    public:
    int data;
    Node* next;

    // constructor
    Node(int da){
        this->data = da;
        this->next = NULL;
    }
};



void insertAtTail(Node* &tail, int d){
    Node* temp = new Node(d);
    tail ->next = temp;
    tail = temp;
}


void middle_node_of_LL(Node* &head) {
    Node* temp = head;
    int cnt = 0;

    while (temp != NULL) {
        cnt++;
        temp = temp->next;
    }

    int mid = cnt / 2;
    int position = 0;

    Node* curr = head;

    while (curr != NULL && position < mid) {
        curr = curr->next;
        position++;
    }

    cout << curr->data << " ";

    cout << endl;
}


int main(){

    Node* node1 = new Node(1);

    Node* head = node1;
    Node* tail = node1;

    insertAtTail(tail,2);
    insertAtTail(tail,3);
    insertAtTail(tail,4);
    insertAtTail(tail,5);

    // print(head);

    // cout << length_of_LL(head) << endl;

    middle_node_of_LL(head);

    return 0;
}


