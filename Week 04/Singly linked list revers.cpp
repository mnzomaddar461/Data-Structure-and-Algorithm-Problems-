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

void insert_value(Node* &head,Node* &tail, int value){
    Node* newnode = new Node(value);
    if(head == NULL){
        head = newnode;
        return;
    }
    newnode->next = head;
    head = newnode;
}

void revers_linked_list(Node* &head,Node* tail, Node* &temp){
    if(temp->next == NULL){
        head = temp;
        return;
    }
    revers_linked_list(head,tail,temp->next);
    temp->next->next = temp;
    temp->next = NULL;
    tail = temp;
}

void print_linked_list(Node* head){
    Node* temp = head;
    while(temp != NULL){
        cout << temp->value << " ";
        temp = temp->next;
    }
    cout << endl;
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
        insert_value(head,tail,value);
    }

    print_linked_list(head);
    cout << "New Head's Value: " << head->value << endl;

    revers_linked_list(head, tail, head);
    cout << "Old Head's Value: " << head->value << endl;
    return 0;
}