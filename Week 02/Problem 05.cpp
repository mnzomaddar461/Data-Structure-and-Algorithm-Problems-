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


void remove_duplicates(Node* head){
    if(head == NULL){
        return;
    }
    
    Node* current = head;
    
    while(current != NULL){
        Node* runner = current;
        

        while(runner->next != NULL){
            if(runner->next->value == current->value){

                Node* duplicate = runner->next;
                runner->next = runner->next->next;
                delete duplicate;
            }
            else{
                runner = runner->next;
            }
        }
        
        current = current->next;
    }
}

void print_linked_list(Node* head){
    Node* temp = head;
    while(temp != NULL){
        cout << temp->value;
        if(temp->next != NULL){
            cout << " ";
        }
        temp = temp->next;
    }
    cout << endl;
}

int main(){
    Node* head = NULL;
    Node* tail = NULL;
    
    int value;
    while(cin >> value){
        if(value == -1){
            break;
        }
        insert_at_tail(head, tail, value);
    }
    
    remove_duplicates(head);
    
    print_linked_list(head);
    
    return 0;
}