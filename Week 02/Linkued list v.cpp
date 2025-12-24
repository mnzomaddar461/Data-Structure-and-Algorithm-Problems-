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

void insart_value_in_tail(Node* &head, Node* &last, int value){
    Node* newnode = new Node(value);
        if(head == NULL){
            head = newnode;
            last = newnode;
            return;
        }
        // Unoptimized process
        // Node* temp = head;
        // while(temp->next != NULL){
        //     temp = temp->next;
        // }
    last->next = newnode;
    last = last->next;

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
    Node* last = new Node(30);

    head->next = node1;
    node1->next = node2;
    node2->next = last;

    insart_value_in_tail(head,last, 50);
    insart_value_in_tail(head,last, 5980);
    print_linked_list(head);

    // cout << "last = " << last->value << endl;

    return 0;
}