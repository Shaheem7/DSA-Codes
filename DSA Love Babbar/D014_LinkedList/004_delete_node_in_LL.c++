#include<iostream>
using namespace std;



class ListNode{

    public:
    int data;
    ListNode* next;

    // constructor
    ListNode(int da){
        this->data = da;
        this->next = NULL;
    }
};

int main(){

    ListNode* head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(3);
    head->next->next->next = new ListNode(4);
    head->next->next->next->next = new ListNode(5);

    cout << head->next->next << endl;
    cout << head->next->next->data;

    ListNode* delnode = head->next->next;

    ListNode* temp = delnode; 
    while (temp!=NULL)
    {
        
    }
    

    return 0;
}