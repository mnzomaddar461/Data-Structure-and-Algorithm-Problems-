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

void insert_at_tail(Node* &head, Node* &tail, int value){
    Node* newnode = new Node(value);
    if(head == NULL){
        head = newnode;
        tail = newnode;
        return;
    }
    tail->next = newnode;
    tail = newnode;
}

// delete node at given index (0-based)
void delete_any_position(Node* &head, int index){
    if(head == NULL) return;

    // delete head
    if(index == 0){
        Node* del = head;
        head = head->next;
        delete del;
        return;
    }

    Node* temp = head;
    for(int i = 0; i < index - 1; i++){
        if(temp->next == NULL) return; // index out of range
        temp = temp->next;
    }

    if(temp->next == NULL) return;

    Node* del = temp->next;
    temp->next = del->next;
    delete del;
}

void print_linked_list(Node* head){
    if(head == NULL){
        cout << "Empty!" << endl;
        return;
    }
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
        if(value == -1) break;
        insert_at_tail(head, tail, value);
    }

    int index;
    cout << "Enter Index: ";
    cin >> index;

    delete_any_position(head, index);
    print_linked_list(head);

    return 0;
}
