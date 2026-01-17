#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int val;
    Node* next;
    Node* prev;

    Node(int val) {
        this->val = val;
        next = NULL;
        prev = NULL;
    }
};

int main() {
    int Q;
    cin >> Q;

    Node* head = NULL;
    Node* tail = NULL;
    int size = 0;

    while (Q--) {
        int X, V;
        cin >> X >> V;

        if (X > size) {
            cout << "Invalid" << endl;
            continue;
        }

        Node* newNode = new Node(V);

        if (size == 0) {
            head = tail = newNode;
        }
        else if (X == 0) {
            newNode->next = head;
            head->prev = newNode;
            head = newNode;
        }
        else if (X == size) {
            tail->next = newNode;
            newNode->prev = tail;
            tail = newNode;
        }
        else {
            Node* temp = head;
            for (int i = 0; i < X - 1; i++) {
                temp = temp->next;
            }

            newNode->next = temp->next;
            newNode->prev = temp;
            temp->next->prev = newNode;
            temp->next = newNode;
        }

        size++;

        cout << "L -> ";
        Node* t = head;
        while (t != NULL) {
            cout << t->val << " ";
            t = t->next;
        }
        cout << endl;

        cout << "R -> ";
        t = tail;
        while (t != NULL) {
            cout << t->val << " ";
            t = t->prev;
        }
        cout << endl;
    }

    return 0;
}
