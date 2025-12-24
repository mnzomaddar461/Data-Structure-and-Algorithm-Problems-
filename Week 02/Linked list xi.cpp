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

void input_value_of_linkedlist(Node* &head, Node* &end, int value){
    Node* newnode = new Node(value);
    if(head == NULL){
        head = newnode;
        end = newnode;
        return;
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

void delete_end_node(Node* &head, Node* &end, int index){
    Node* temp = head;

    for(int i = 1; i < index; i++){
        temp = temp->next;
    }

    Node* deletenode = temp->next;
    temp->next = NULL;
    delete deletenode;
    end = temp;
}

int main(){
    Node* head = NULL;
    Node* end = NULL;
    int value, index;

    while(true){
        cin >> value;
        if(value == -1) break;
        input_value_of_linkedlist(head, end, value);
    }

    cout << "Original Linked List:\n";
    print_linked_list(head);

    cout << "Before delete END: " << end->value << endl;

    cout << "Input last node previous index: ";
    cin >> index;

    delete_end_node(head, end, index);

    cout << "After Deletion:\n";
    print_linked_list(head);

    cout << "After delete END: " << end->value << endl;

    return 0;
}