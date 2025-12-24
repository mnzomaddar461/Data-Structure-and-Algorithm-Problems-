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

void insart_node_value(Node* &head, Node* &end, int value){
    Node* newnode = new Node(value);
    if(head == NULL){
        head = newnode;
        end = newnode;
        return;
    }
    end->next = newnode;
    end = newnode;
}

void linked_list_sort(Node* head){
    for(Node* i = head; i->next != NULL; i = i->next){
        for(Node* j = i->next; j != NULL; j = j->next){
            if(i->value > j->value){
                swap(i->value , j->value);
            }
        }
    }
}

void print_linked_list(Node* head){
    Node* temp = head;
    while(temp != NULL){
        cout << temp->value << endl;
        temp = temp->next;
    }
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
        insart_node_value(head, end, value);
    }

    cout << "Original Linked List: " << endl;
    print_linked_list(head);
    cout << "Sorted Linked LIst: " << endl;
    linked_list_sort(head);
    print_linked_list(head);

    return 0;
}