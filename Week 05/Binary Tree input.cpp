#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int value;
    Node* left;
    Node* right;
    Node(int value){
        this->value = value;
        this->left = NULL;
        this->right = NULL;
    }
};

Node* inputTree(){
    int val;
    cin >> val;
    Node* root = new Node(val);
    queue<Node*> q;
    q.push(root);

    while (!q.empty())
    {
        Node* prent = q.front();
        q.pop();

        int leftvalue, rightvalue;
        cin >> leftvalue >> rightvalue;
        Node* newleft, *newright;
        if(leftvalue == -1){
            newleft = NULL;
        }
        else{
            newleft = new Node(leftvalue);
        }

        if(rightvalue == -1){
            newright = NULL;
        }
        else{
            newright = new Node(rightvalue);
        }

        prent->left = newleft;
        prent->right = newright;

        if(prent->left != NULL){
            q.push(prent->left);
        }
        if(prent->right != NULL){
            q.push(prent->right);
        }
    }
    return root;
}

void print_level_order(Node* root){
    queue<Node*> q;
    q.push(root);
    while (!q.empty())
    {
        Node* front = q.front();
        q.pop();
        cout << front->value << " ";
        if(front->left != NULL){
            q.push(front->left);
        }
        if(front->right != NULL){
            q.push(front->right);
        }
    }
    
}
int main(){
    Node* root = inputTree();
    print_level_order(root);
    return 0;
}