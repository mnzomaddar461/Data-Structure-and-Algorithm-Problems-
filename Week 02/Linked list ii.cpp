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
int main(){
    Node* head = new Node(10);
    Node* node1 = new Node(20);
    Node* node2 = new Node(30);

    head->next = node1;
    node1->next = node2;

    cout << head->value << endl;
    cout << node1->value << endl;
    cout << node2->value << endl;
    
    return 0;
}