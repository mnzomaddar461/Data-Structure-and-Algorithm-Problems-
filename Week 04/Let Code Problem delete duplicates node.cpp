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

Node* delete_duplicates(Node* head){
    Node* temp = head;
    while(temp->next != NULL)
    {
        if(temp->value == temp->next->value){
            Node* del = temp->next;
            temp->next = temp->next->next;
            delete del;
        }
        else{
            temp = temp->next;
        }
    }
    return head;
}

void insert_value(Node* &head, Node* &tail, int value){
    Node* newnode = new Node(value);
    if(head == NULL){
        head = newnode;
        tail = newnode;
        return;
    }
    tail->next = newnode;
    tail = newnode;
}

void print_linked_list(Node* head){
    Node* temp = delete_duplicates(head);
    if(temp == NULL){
        cout << "Linked List is empty!" << endl;
    }
    while (temp != NULL)
    {
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
    return 0;
}