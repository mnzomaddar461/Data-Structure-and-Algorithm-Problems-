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


void insert_at_head(Node* &head, int value){
    Node* newnode = new Node(value);
    newnode->next = head;
    head = newnode;
}


void insert_at_tail(Node* &head, int value){
    Node* newnode = new Node(value);
    if(head == NULL){
        head = newnode;
        return;
    }
    Node* temp = head;
    while(temp->next != NULL){
        temp = temp->next;
    }
    temp->next = newnode;
}

void delete_at_index(Node* &head, int index){
    if(head == NULL){
        return; 
    }
    

    if(index == 0){
        Node* deleteNode = head;
        head = head->next;
        delete deleteNode;
        return;
    }
    
    
    Node* temp = head;
    for(int i = 0; i < index - 1; i++){
        if(temp == NULL || temp->next == NULL){
            return; 
        }
        temp = temp->next;
    }

    if(temp->next == NULL){
        return; 
    }
    
    Node* deleteNode = temp->next;
    temp->next = temp->next->next;
    delete deleteNode;
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
    int q;
    cin >> q;
    
    while(q--){
        int x, v;
        cin >> x >> v;
        
        if(x == 0){
        
            insert_at_head(head, v);
        }
        else if(x == 1){
    
            insert_at_tail(head, v);
        }
        else if(x == 2){

            delete_at_index(head, v);
        }

        print_linked_list(head);
    }
    
    return 0;
}