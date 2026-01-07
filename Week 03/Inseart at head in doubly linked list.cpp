#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int value;
    Node* next;
    Node* prev;
    Node(int value){
        this->value = value;
        this->next = NULL;
        this->prev = NULL;
    }
};

void inseart_at_head(Node* &head, int value){
    Node* newnode = new Node(value);
    newnode->next = head;
    head->prev = newnode;
    head = newnode;
}

void print_forward(Node* head){
    Node* temp = head;
    while(temp != NULL){
        cout << temp->value << " ";
        temp = temp->next;
    }
    cout << endl;
}
int main(){
    Node* head = new Node(10);
    Node* node1 = new Node(20);
    Node* node2 = new Node(30);
    Node* tail = new Node(40);

    // linked one by one
    head->next = node1;
    node1->prev = head;
    node1->next = node2;
    node2->prev = node1;
    node2->next = tail;
    tail->prev = node2;

    print_forward(head);
    inseart_at_head(head,100);
    print_forward(head);
    return 0;
}