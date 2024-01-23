#include<iostream>
#include<bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    struct Node *left;
    struct Node *right;
    Node(int val) {
        data = val;
        left = right = NULL;
    }
};

vector<int> inOrderTrav(Node *curr) {
    vector<int> inOrder;
    stack<Node *> s;
    while (true) {
        if (curr != NULL) {
            s.push(curr);
            curr = curr->left;
        } else {
            if (s.empty()) break;
            curr = s.top();
            inOrder.push_back(curr->data);
            s.pop();
            curr = curr->right;
        }
    }
    return inOrder;
}

int main() {
    Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);

    vector<int> inOrder;
    inOrder = inOrderTrav(root);
    cout << "The inOrder Traversal is: ";
    for (int i = 0; i < inOrder.size(); i++) {
        cout << inOrder[i] << " ";
    }

    return 0;
}
