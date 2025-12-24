/*
#include<bits/stdc++.h>
using namespace std;
void recartion(int i, int n){
    if(i > n){
        return;
    }
    cout << i << endl;
    recartion(i + 1,n);
    cout << i << endl;
}
int main(){
    int n = 10;
    recartion(1,n);
    return 0;
}
*/

/*---Linked list revarse print using recartion---*/

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

void make_a_newnode_insart_value(Node* &head, Node* &end, int value){
    Node* newnode = new Node(value);
    if(head == NULL){
        head = newnode;
        end = newnode;
    }
    end->next = newnode;
    end = newnode;
}

void print_linkedlist_revarse(Node* temp){
    if(temp == NULL){
        return;
    }
    print_linkedlist_revarse(temp->next);
    cout << temp->value << endl;
    
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
        make_a_newnode_insart_value(head, end, value);
    }

    print_linkedlist_revarse(head);
    return 0;
}