#include<iostream>
using namespace std;

class Node{

    public:

    int data;
    Node* next;

    // Constructor
    Node(int d){
        this->data = d;
        this->next = next;
    }

    // Deconstructor
    ~Node (){
        int value = this->data;
        if (this->next != NULL)
        {
            delete next;
            next = NULL;
        }
        cout << "Memory is free for node with data " << value << endl;
    }
};


void insertion(Node* &tail, int element, int da){

    // Empty list 
    if (tail == NULL)
    {
        Node* newNode = new Node(da);
        tail = newNode;
        newNode->next = newNode;
    }
    else{
        // non-empty list 

        Node* current = tail;

        while (current->data != element)
        {
            current = current->next;
        }

        Node* temp = new Node(da);
        temp->next = current->next;
        current->next = temp;
           
    }
    
}


void print(Node* &tail){
    Node* temp = tail;

    do
    {
        cout << tail->data << " ";
        tail = tail->next;

    } while (tail != temp);
    cout << endl;

}


int main(){

    // Node* node1 = new Node(5);

    Node* tail = NULL;

    insertion(tail, 5, 3);
    print(tail);

    insertion(tail, 3, 4);
    print(tail);

    insertion(tail, 4, 5);
    print(tail);
    return 0;
}