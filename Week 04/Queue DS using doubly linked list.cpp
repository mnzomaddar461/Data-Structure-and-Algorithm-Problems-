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

class myQueue{
    public:
        Node* head = NULL;
        Node* tail = NULL;
        int sz = 0;

        void push(int value){
            sz++;
            Node* newnode = new Node(value);
            if(head == NULL){
                head = newnode;
                tail = newnode;
                return;
            }
            tail->next = newnode;
            newnode->prev = tail;
            tail = newnode;
        }

        void pop(){
            sz--;
            Node* deleteNode = head;
            head = head->next;
            delete deleteNode;
            if(head == NULL){
                tail = NULL;
                return;
            }
            head->prev = NULL;
        }

        int font(){
            return head->value;
        }

        int back(){
            return tail->value;
        }

        int size(){
            return sz;
        }

        bool empty(){
            return head == NULL;
        }
};
int main(){
    myQueue qe;
    int size_of_qe;
    cin >> size_of_qe ;
    for(int i = 0; i < size_of_qe; i++){
        int value;
        cin >> value;
        qe.push(value);
    }

    cout << "Corrent Font, Back & size: " << qe.font() << " , " << qe.back() << " & " << qe.size() << endl;

    while(!qe.empty()){
        cout << qe.font() << endl;
        qe.pop();
    }
    return 0;
}