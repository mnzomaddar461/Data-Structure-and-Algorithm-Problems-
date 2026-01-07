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

void inseart_at_tail(Node* &tail, int value){
    Node* newnode = new Node(value);
    newnode->prev = tail;
    tail->next = newnode;
    tail = newnode;
}

void print_forwerd(Node* head){
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

    head->next = node1;
    node1->prev = head;
    node1->next = node2;
    node2->prev = node1;
    node2->next = tail;
    tail->prev = node2;

    print_forwerd(head);
    inseart_at_tail(tail,50);
    // inseart_at_tail(tail,60);
    print_forwerd(head);
    return 0;
}