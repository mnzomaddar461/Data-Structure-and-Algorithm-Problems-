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
void value_insart_in_linked_list(Node* &head, Node* &end, int value){
    Node* newnode = new Node(value);
    if(head == NULL){
        head = newnode;
        end = newnode;
        return;
    }
    end->next = newnode;
    end = newnode;
}
int findMax(Node* head) {
    if (head == NULL) {
        //cout << "List is empty!" << endl;
        return INT_MIN;
    }
    
    int maxValue = head->value;
    Node* temp = head->next;
    
    while (temp != NULL) {
        if (temp->value > maxValue) {
            maxValue = temp->value;
        }
        temp = temp->next;
    }
    
    return maxValue;
}

int findMin(Node* head) {
    if (head == NULL) {
        //cout << "List is empty!" << endl;
        return INT_MAX;
    }
    
    int minValue = head->value;
    Node* temp = head->next;
    
    while (temp != NULL) {
        if (temp->value < minValue) {
            minValue = temp->value;
        }
        temp = temp->next;
    }
    
    return minValue;
}

int main(){
    Node* head = NULL;
    Node* end = NULL;
    int value;
    while(cin >> value){ 
        if(value == -1){
            break;
        }
        value_insart_in_linked_list(head, end, value);
    }

    int maxVal = findMax(head);
    int minVal = findMin(head);
    
    int result = maxVal - minVal;
    
    cout << result << endl;
    
    return 0;
}