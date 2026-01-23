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

void input_linked_list(Node* &head, int value){
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

Node* RedesignNodeFirstEvenLastOdd(Node* head){
    Node* evenValue = new Node(0);
    Node* oddValue = new Node(0);

    Node* evenTail = evenValue;
    Node* oddTail = oddValue;

    Node* curr = head;

    while(curr != NULL){
        if(curr->value % 2 == 0){
            evenTail->next = curr;
            evenTail = evenTail->next;
        } else {
            oddTail->next = curr;
            oddTail = oddTail->next;
        }
        curr = curr->next;
    }

    evenTail->next = oddValue->next;
    oddTail->next = NULL;

    return evenValue->next;
}

void print_list(Node* head){
    while(head != NULL){
        cout << head->value << " ";
        head = head->next;
    }
    cout << endl;
}

int main(){
    Node* head = NULL;
    int n;
    cin >> n;

    while(n--){
        int value;
        cin >> value;
        input_linked_list(head, value);
    }

    head = RedesignNodeFirstEvenLastOdd(head);
    print_list(head);

    return 0;
}
