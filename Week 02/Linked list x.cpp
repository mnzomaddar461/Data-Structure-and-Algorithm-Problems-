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

void delete_any_where(Node* &head, int index){
    Node* temp = head;
    for(int i = 1; i < index; i++){
        temp = temp->next;
    }
    Node* deletenode = temp->next;
    temp->next = temp->next->next;
    delete deletenode;
}
int main(){
    Node* head = NULL;
    Node* end = NULL;
    int value, index;
    while(true){
        cin >> value;
        if(value == -1){
            break;
        }
        input_value_of_linkedlist(head, end, value);
    }

    cout << "Original Linked List: "<< endl;
    print_linked_list(head);

    cout << "Input Delete Node Index: ";
    cin >> index;
    delete_any_where(head, index);
    cout << "After Deletion Node: " << endl;
    print_linked_list(head);

    return 0;
}