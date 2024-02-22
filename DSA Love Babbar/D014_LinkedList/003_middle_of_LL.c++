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

void print(Node* head){
    Node* temp = head;

    cout << endl;
    while (temp != NULL)
    {
        cout << temp ->data << " -> ";
        temp = temp ->next ;
    }
    cout << "Null";
    cout << endl;
    cout << endl;
}

void insertAtTail(Node* &tail, int d){
    Node* temp = new Node(d);
    tail ->next = temp;
    tail = temp;
}

int length_of_LL(Node* &head){
    Node* temp = head;
    int cnt = 0;

    while (temp!=NULL)
    {
        cnt++;
        temp = temp->next;
    }
    return cnt;

}


void middle_half_of_LL(Node* &head) {
    int cnt = length_of_LL(head);
    int mid = cnt / 2;
    int position = 0;

    Node* temp = head;

    while (temp != NULL && position < mid) {
        temp = temp->next;
        position++;
    }

    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }

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

    print(head);

    // cout << length_of_LL(head) << endl;

    middle_half_of_LL(head);

    return 0;
}