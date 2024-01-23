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
vector<int> levelOrder(Node* root) {
        vector<int> ans; 
        
        if(root == NULL) 
            return ans; 
            
        queue<Node*> q; 
        q.push(root); 
        
        while(!q.empty()) {
           
            Node *temp = q.front(); 
            q.pop(); 
            
            if(temp->left != NULL) 
                q.push(temp->left); 
            if(temp->right != NULL) 
                q.push(temp->right); 
                
            ans.push_back(temp->data); 
        }
        return ans; 
}
int main() {
    Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);

    vector<int> level;
    level = levelOrder(root);
    cout << "The inOrder Traversal is: ";
    for (int i = 0; i < level.size(); i++) {
        cout << level[i] << " ";
    }

    return 0;
}