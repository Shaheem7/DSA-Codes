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


int main(){


    return 0;
}