#include<bits/stdc++.h>
using namespace std;
class Node1{
    public:
    int value;
    Node1* next;
    Node1* prev;
    Node1(int value){
        this->value = value;
        this->next = NULL;
        this->prev = NULL;
    }
};
void insert_value_first_LL(Node1* &head1, Node1* &tail1, int value1){
    Node1* newnode = new Node1(value1);
    if(head1 == NULL){
        head1 = newnode;
        tail1 = newnode;
        return;
    }
    newnode->prev = tail1;
    tail1->next = newnode;
    tail1 = newnode;
}

class Node2{
    public:
    int value;
    Node2* next;
    Node2* prev;
    Node2(int value){
        this->value = value;
        this->next = NULL;
        this->prev = NULL;
    }
};
void insert_value_second_LL(Node2* &head2, Node2* &tail2, int value2){
    Node2* newnode = new Node2(value2);
    if(head2 == NULL){
        head2 = newnode;
        tail2 = newnode;
        return;
    }
    newnode->prev = tail2;
    tail2->next = newnode;
    tail2 = newnode;
}

void print_forwerd_first_LL(Node1* head1){
    Node1* temp = head1;
    while(temp != NULL){
        cout << temp->value << " ";
        temp = temp->next;
    }
    cout << endl;
}

void print_forwerd_second_LL(Node2* head2){
    Node2* temp = head2;
    while(temp != NULL){
        cout << temp->value << " ";
        temp = temp->next;
    }
    cout << endl;
}

void compear_LL_value(Node1* head1, Node2* head2, int length1, int length2){
        if(length1 != length2){
        cout << "NO" << endl;
        return;
    }

    Node1* value1 = head1;
    Node2* value2 = head2;
    int flag = 0;

        while (value1 != NULL && value2 != NULL)
        {
            if(value1->value != value2->value){
                flag = 1;
                break;
            }
        value1 = value1->next;
        value2 = value2->next;
        }

    if(flag == 0){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }

}

int main(){
    Node1* head1 = NULL;
    Node1* tail1 = NULL;

    Node2* head2 = NULL;
    Node2* tail2 = NULL;

    int length1 = 0, length2 = 0;
    int value1, value2;
    while (true)
    {
        cin >> value1;
        if(value1 == -1){
            break;
        }
        insert_value_first_LL(head1,tail1,value1);
        length1++;
    }

    print_forwerd_first_LL(head1);
    
    while (true)
    {
        cin >> value2;
        if(value2 == -1){
            break;
        }
        insert_value_second_LL(head2,tail2,value2);
        length2++;
    }

    print_forwerd_second_LL(head2);

    compear_LL_value(head1,head2,length1,length2);
    return 0;
}