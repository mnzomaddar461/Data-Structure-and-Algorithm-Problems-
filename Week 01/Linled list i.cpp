#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int value;
    Node* next;
};

int main(){
    Node node1, node2, node3;
    //value assign in node
    node1.value = 10;
    node2.value = 20;
    node3.value = 30;

    //Linking the next node
    node1.next = &node2;
    node2.next = &node3;
    node3.next = NULL;

    cout << "First Node: " << node1.value << endl;
    cout << "Second Node: " << node2.value << endl;
    cout << "Last Node: " << node3.value << endl;

    // Print last node using first/head node
    cout << "Last Node: " << node1.next->next->value << endl;
    return 0;
}