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
        this->prev =NULL;
    }
};

void delete_at_tail(Node* &head, Node* &tail){
    Node* deletenode = tail;
    tail = tail->prev;
    delete deletenode;
    if(tail == NULL){
        head = NULL;
        return;
    }
    tail->next = NULL;
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
    delete_at_tail(head, tail);
    print_forwerd(head);
    return 0;
}