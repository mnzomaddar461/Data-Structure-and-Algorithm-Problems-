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

void insert_value_at_LL(Node* &head, Node* &tail, int value){
    Node* newnode = new Node(value);
    if(head == NULL){
        head = newnode;
        tail = newnode;
        return;
    }
    newnode->prev = tail;
    tail->next = newnode;
    tail = newnode;
}

void print_backwerd(Node* &tail){
    Node* temp = tail;
    while(temp != NULL){
        cout << temp->value << " ";
        temp = temp->prev;
    }
}

int main(){
    Node* head = NULL;
    Node* tail = NULL;
    int value;
    while(true){
        cin >> value;
        if(value == -1){
            break;
        }
        insert_value_at_LL(head,tail,value);
    }
    print_backwerd(tail);
    return 0;
}