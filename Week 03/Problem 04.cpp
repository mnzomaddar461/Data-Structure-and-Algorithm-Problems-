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
/* This code for biganer
void linked_list_sort(Node* head){
    for(Node* i = head; i->next != NULL; i = i->next){
        for(Node* j = i->next; j != NULL; j = j->next){
            if(i->value > j->value){
                swap(i->value , j->value);
            }
        }
    }
}
*/

void linked_list_sort(Node* &head, Node* &tail){
    if(head == NULL) return;

    for(Node* i = head; i != NULL; i = i->next){
        Node* minNode = i;

        for(Node* j = i->next; j != NULL; j = j->next){
            if(j->value < minNode->value){
                minNode = j;
            }
        }

        if(minNode != i){
            // swap nodes i and minNode (only values for simplicity)
            swap(i->value, minNode->value);
        }
    }
}


void print_forwewrd(Node* head){
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
        insert_value_at_LL(head,tail,value);
    }

    print_forwewrd(head);
    linked_list_sort(head,tail);
    print_forwewrd(head);
    return 0;
}