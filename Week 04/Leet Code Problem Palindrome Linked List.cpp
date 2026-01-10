#include<bits/stdc++.h>
using namespace std;
//- Asked in [Facebook, Amazon, Microsoft, Apple, Google, Snapchat, Adobe, Twitter, Intel]
class Node{
public:
    int value;
    Node* next;

    Node(int value){
        this->value = value;
        this->next = NULL;
    }
};


void insert(Node* &head, Node* &tail, int value){
    Node* newnode = new Node(value);
    if(head == NULL){
        head = newnode;
        tail = newnode;
        return;
    }
    tail->next = newnode;
    tail = newnode;
}

Node* reverseList(Node* head){
    if(head == NULL || head->next == NULL)
        return head;

    Node* newHead = reverseList(head->next);
    head->next->next = head;
    head->next = NULL;
    return newHead;
}


bool isPalindrome(Node* head){
    if(head == NULL || head->next == NULL)
        return true;


    Node* newHead = NULL;
    Node* newTail = NULL;

    Node* temp = head;
    while(temp != NULL){
        insert(newHead, newTail, temp->value);
        temp = temp->next;
    }


    newHead = reverseList(newHead);


    temp = head;
    Node* temp2 = newHead;

    while(temp != NULL){
        if(temp->value != temp2->value)
            return false;
        temp = temp->next;
        temp2 = temp2->next;
    }
    return true;
}


int main(){
    Node* head = NULL;
    Node* tail = NULL;

    int value;
    while(true){
        cin >> value;
        if(value == -1) break;
        insert(head, tail, value);
    }

    if(isPalindrome(head))
        cout << "Palindrome" << endl;
    else
        cout << "Not Palindrome" << endl;

    return 0;
}
