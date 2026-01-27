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
    Node* root;
    if(val == -1){
        root = NULL;
    }
    else{
        root = new Node(val);
    }
    queue<Node*> q;
    if(root != NULL){
        q.push(root);
    }

    while (!q.empty())
    {
        Node* prent = q.front();
        q.pop();
        int leftval, rightval;
        cin >> leftval >> rightval;
        Node* newleft, *newright;
        if(leftval == -1){
            newleft = NULL;
        }
        else{
            newleft = new Node(leftval);
        }
        if(rightval == -1){
            newright = NULL;
        }else{
            newright = new Node(rightval);
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

int count_nodes(Node* root){
    if(root == NULL){
        return 0;
    }
    int l = count_nodes(root->left);
    int r = count_nodes(root->right);
    return l + r + 1;
}
int main(){
    Node* root = inputTree();
    cout << count_nodes(root) << endl;
    return 0;
}