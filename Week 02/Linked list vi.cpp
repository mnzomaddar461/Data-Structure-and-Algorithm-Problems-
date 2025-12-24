#include<bits/stdc++.h>
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

void insart_value_any_index(Node* &head, int index, int value){
    Node* newnode = new Node(value);
        Node* temp = head;
        for(int i = 1; i < index; i++){
            temp = temp->next;
        }
    newnode->next = temp->next;
    temp->next = newnode;
}

void print_linked_list(Node* head){
    Node* temp = head;
        while(temp != NULL){
            cout << temp->value << endl;
            temp = temp->next;
        }
}
int main(){
    Node* head = new Node(10);
    Node* node1 = new Node(20);
    Node* node2 = new Node(30);

    head->next = node1;
    node1->next = node2;

    insart_value_any_index(head, 2, 1000);
    print_linked_list(head);
    return 0;
}