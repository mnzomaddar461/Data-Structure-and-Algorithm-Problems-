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

void insert_value_at_LL(Node* &head, Node* &tail, int value){
    Node* newnode = new Node(value);
    if(head == NULL){
        head = newnode;
        tail = newnode;
        return;
    }
    newnode->prev = tail;
    tail->next = newnode;
    tail = newnode;
}

void is_pelindrom(Node* head, Node* tail){
    Node* left = head;
    Node* right = tail;
    while(left != right && left->prev != right){ // (left != right for ODD length) and (left->prev != right for EVEN length )
        if(left->value != right->value){
            cout << "NO" << endl;
            return;
        }
        left = left->next;
        right = right->prev;
    }
    cout << "YES" << endl;
}

void print_forwerd(Node* head){
    Node* temp = head;
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
        insert_value_at_LL(head,tail,value);
    }

    print_forwerd(head);
    is_pelindrom(head,tail);
    return 0;
}