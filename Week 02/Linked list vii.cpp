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

void insart_new_value_in_end(Node* &head, Node* &end, int value){
    Node* newnode = new Node(value);
    if(head == NULL){
        head = newnode;
        end = newnode;
    }
    end->next = newnode;
    end = newnode;
}

void print_linked_list(Node* head){
    Node* temp = head;
        while(temp != NULL){
            cout << temp->value << endl;
            temp = temp->next;
        }
}

int main(){
    Node* head = NULL;
    Node* end = NULL;

    int value;
    while(true){
        cin >> value;
        if(value == -1){
            break;
        }
        insart_new_value_in_end(head, end, value);
    }

    print_linked_list(head);
    return 0;
}