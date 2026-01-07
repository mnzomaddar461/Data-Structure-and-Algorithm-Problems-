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
        this->prev= NULL;
    }
};

void insert_at_any_position(Node* head, int index, int value){
    Node* newnode = new Node(value);
    Node* temp = head;
    for(int i = 0; i < index; i++){
        temp = temp->next;
    }
    newnode->next = temp->next;
    temp->next->prev = newnode;
    temp->next = newnode;
    newnode->prev = temp;
    
}

void print_forword(Node* head){
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
    Node* tail = new Node(30);

    head->next = node1;
    node1->prev = head;
    node1->next = tail;
    tail->prev = node1;

    print_forword(head);
    insert_at_any_position(head,1,100);
    print_forword(head);
    return 0;
}