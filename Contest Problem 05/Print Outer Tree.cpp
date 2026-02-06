#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node(int v) { val = v; left = right = NULL; }
};

Node* buildTree() {
    int val;
    cin >> val;
    if (val == -1) return NULL;
    Node* root = new Node(val);
    queue<Node*> q;
    q.push(root);
    while (!q.empty()) {
        Node* cur = q.front(); q.pop();
        int l, r;
        cin >> l >> r;
        if (l != -1) { cur->left = new Node(l); q.push(cur->left); }
        if (r != -1) { cur->right = new Node(r); q.push(cur->right); }
    }
    return root;
}

bool isLeaf(Node* node) { 
    return node && !node->left && !node->right; 
}

void printLeftBoundary(Node* node) {
    if (!node) return;
    if (isLeaf(node)) {
        cout << node->val << " ";
        return;
    }
    if (node->left) printLeftBoundary(node->left);
    else printLeftBoundary(node->right);
    cout << node->val << " ";
}

void printRightBoundary(Node* node) {
    if (!node) return;
    if (isLeaf(node)) {
        cout << node->val << " ";
        return;
    }
    cout << node->val << " ";
    if (node->right) printRightBoundary(node->right);
    else printRightBoundary(node->left);
}

int main() {
    Node* root = buildTree();
    if (!root) return 0;
    
    if (isLeaf(root)) {
        cout << root->val << " " << endl;
        return 0;
    }
    
    // Left boundary (bottom to top, ending with root)
    if (root->left) printLeftBoundary(root->left);
    
    // Root
    cout << root->val << " ";
    
    // Right boundary (top to bottom, starting after root)
    if (root->right) printRightBoundary(root->right);
    
    cout << endl;
    
    return 0;
}