#include<bits/stdc++.h>
// Asked in [Amazon, Apple]
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
void inseart_value(Node* &head, Node* &tail, int value){
    Node* newnode = new Node(value);
    if(head == NULL){
        head = newnode;
        tail = newnode;
        return;
    }
    tail->next = newnode;
    tail = newnode;
}

int size(Node* head){
    Node* temp = head;
    int count = 0;
    while(temp != NULL){
        count++;
        temp = temp->next;
    }
    return count;
}

Node* check_middle_node(Node* head){
    int siz_of_linkedList = size(head);
    Node* temp = head;
    for(int i = 1; i <= siz_of_linkedList/2; i++){
        temp = temp->next;
    }
    return temp;
}

void print_middle_node(Node* head){
    if(head == NULL){
        cout << "Linked List Empty!" << endl;
        return;
    }
    Node* result = check_middle_node(head);
    cout << result->value << endl;
}
int main(){
    Node* head = NULL;
    Node* tail = NULL;
    int value;
    while (true)
    {
        cin >> value;
        if(value == -1){
            break;
        }
        inseart_value(head,tail,value);
    }

    check_middle_node(head);
    print_middle_node(head);
    
    return 0;
}