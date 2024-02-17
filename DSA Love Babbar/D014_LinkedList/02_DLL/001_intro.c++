#include<iostream>
using namespace std;

class Node {

    public:

    int data;
    Node* next;
    Node* prev;


   // constructor 
   Node(int d){
        this -> data = d;
        this -> next = NULL;
        this -> prev = NULL;

   } 
};

int main(){

    Node* node1 = new Node(10);


    cout << node1 << endl;
    cout << node1->data << endl;
    cout << node1->next << endl;
    cout << node1->prev << endl;

    return 0;
}