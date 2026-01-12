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

class myQueue{
    public:
        Node* head = NULL;
        Node* tail = NULL;
        int sz = 0;

        void push(int value){      // O(1) and Enqueue
            sz++;
            Node* newnode = new Node(value);
            if(head == NULL){
                head = newnode;
                tail = newnode;
                return;
            }
            tail->next = newnode;
            tail = newnode;
        }

        void pop(){            // O(1) and Dequeue
            sz--;
            Node* deleteNode = head;
            head = head->next;
            delete deleteNode;
            if(head == NULL){
                tail = NULL;
                return;
            }
        }

        int font(){            // O(1) and Top
            return head->value;
        }

        int back(){
            return tail->value;
        }

        int size(){
            return sz;
        }

        bool empty(){
            if(head == NULL){
                return true;
            }
            else{
                return false;
            }

            // Shortcut return head == NULL
        }

};
int main(){
    myQueue qe;
    int size_of_qu;
    cin >> size_of_qu;
    for(int i = 0; i < size_of_qu; i++){
        int value;
        cin >> value;
        qe.push(value);
    }

    cout << "Current Font & Back: " << qe.font() << " & " << qe.back() << endl;

    cout << "Original Queue: " << endl;
    while(!qe.empty()){
        cout << qe.font() << endl;
        qe.pop();
    }
    return 0;
}