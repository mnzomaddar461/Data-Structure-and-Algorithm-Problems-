#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node(int v) {
        val = v;
        left = right = NULL;
    }
};

Node* inputTree() {
    int val;
    cin >> val;
    if (val == -1) return NULL;

    Node* root = new Node(val);
    queue<Node*> q;
    q.push(root);

    while (!q.empty()) {
        Node* cur = q.front();
        q.pop();

        int l, r;
        cin >> l >> r;

        if (l != -1) {
            cur->left = new Node(l);
            q.push(cur->left);
        }
        if (r != -1) {
            cur->right = new Node(r);
            q.push(cur->right);
        }
    }
    return root;
}

int countNodes(Node* root) {
    if (!root) return 0;
    return 1 + countNodes(root->left) + countNodes(root->right);
}

int maxDepth(Node* root) {
    if (!root) return -1;
    return 1 + max(maxDepth(root->left), maxDepth(root->right));
}

int main() {
    Node* root = inputTree();

    int totalNodes = countNodes(root);
    int depth = maxDepth(root);

    int expectedNodes = pow(2, depth + 1) - 1;

    if (totalNodes == expectedNodes)
        cout << "YES";
    else
        cout << "NO";
}
