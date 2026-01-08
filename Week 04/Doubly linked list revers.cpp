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

void insert_at_value_inLL(Node* &head, Node* &tail, int value){
    Node* newnode = new Node(value);
    if(head == NULL){
        head = newnode;
        tail = newnode;
        return;
    }
    tail->next = newnode;
    newnode->prev = tail;
    tail = newnode;
}

void revers_linked_list(Node* &head, Node* &tail){
    for(Node *i = head, *j = tail; i != j && i->prev != j ; i = i->next, j = j->prev){
        swap(i->value, j->value);
    }
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
        insert_at_value_inLL(head,tail,value);
    }
    cout << "Orginal Linked List: " ;
    print_linked_list(head);
    cout << endl;
    revers_linked_list(head,tail);
    cout << "Revers Linked List: ";
    print_linked_list(head);
    return 0;
}