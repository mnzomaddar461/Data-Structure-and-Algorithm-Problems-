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
    }else{
        root = new Node(val);
    }
    queue<Node*> q;
    if(root != NULL ) q.push(root);

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

void collectLeaf(Node* root, vector<int>& v) {
    if (root == NULL)
        return;

    if (root->left == NULL && root->right == NULL) {
        v.push_back(root->value);
        return;
    }

    collectLeaf(root->left, v);
    collectLeaf(root->right, v);
}

int main() {
    Node* root = inputTree(); 
    vector<int> leafValues;
    collectLeaf(root, leafValues);

    sort(leafValues.begin(), leafValues.end(), greater<int>());

    for (int x : leafValues) {
        cout << x << " ";
    }
}
