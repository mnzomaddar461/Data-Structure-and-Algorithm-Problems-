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

void input_linked_list(Node* &head, Node* &end, int value){
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
        //return;
    }
}

void delete_head(Node* &head){
    Node* deletenode = head;
    head = head->next;
    delete deletenode;
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
        input_linked_list(head, end, value);
    }

    cout << "Print Full Linked List: " << endl;
    print_linked_list(head);
    delete_head(head);
    cout << "Befor deletion head then print: " << endl;
    print_linked_list(head);
}