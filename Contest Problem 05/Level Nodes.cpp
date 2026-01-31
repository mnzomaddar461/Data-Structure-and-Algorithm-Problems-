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

void printLevel(Node* root, int targetLevel) {
    if (root == NULL) {
        cout << "Invalid";
        return;
    }

    queue<pair<Node*, int>> q;
    q.push({root, 0});   // root level = 0

    bool found = false;

    while (!q.empty()) {
        auto p = q.front();
        q.pop();

        Node* cur = p.first;
        int level = p.second;

        if (level == targetLevel) {
            cout << cur->value << " ";
            found = true;
        }

        if (cur->left)
            q.push({cur->left, level + 1});
        if (cur->right)
            q.push({cur->right, level + 1});
    }

    if (!found) {
        cout << "Invalid";
    }
}


int main(){
    Node* root = inputTree();
    int level;
    cin >> level;
    printLevel(root, level);

    return 0;
}