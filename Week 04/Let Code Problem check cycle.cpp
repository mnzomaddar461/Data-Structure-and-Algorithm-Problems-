#include<bits/stdc++.h>
//- Asked in [Facebook, Amazon, Apple, Microsoft, Google, Samsung, LinkedIn, Uber]
using namespace std;
class Node{
    public:
    int value;
    Node* next;
    Node(int value){
        this->value = value;
        this->next = NULL;
    }
};

/*
    void insert_value_linkedlist(Node* &head, Node* &tail, int value){
        Node* newnode = new Node(value);
        if (head == NULL){
            head = newnode;
            tail = newnode;
            return;
        }
        tail->next = newnode;
        tail = newnode;
}
*/

bool chack_cycle(Node* head){
    Node* slow = head;
    Node* fast = head;

    while(fast != NULL && fast->next != NULL){
        slow = slow->next;
        fast = fast->next->next;

        if(slow == fast){
            return true;
        }
    }
    return false;
}

void print_cycle(Node* head){
    if(head == NULL){
        cout << "Linked List Is Empty!" << endl;
        return;
    }
    bool print = chack_cycle(head);
    cout << print << endl;
}
int main(){
    /*
    User define Linked list so always return FALSE
        Node* head = NULL;
        Node* tail = NULL;
        int value;
        while(true){
            cin >> value;
            if(value == -1){
                break;
            }
            insert_value_linkedlist(head,tail,value);
        }
    */
    
    /* Manual Linked list and always return TRUE */
    Node* head = new Node(10);
    Node* a = new Node(20);
    Node* b = new Node(30);
    Node* c = new Node(40);
    Node* tail = new Node(50);

    head->next = a;
    a->next = b;
    b->next = c;
    c->next = tail;
    tail->next = b;

    print_cycle(head);
    return 0;
}