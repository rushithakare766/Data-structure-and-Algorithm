//Author : Rushikesh Thakare
// Check if the Binary Tree is Balanced Binary Tree
// Problem Statement: Check whether the given Binary Tree is a Balanced 
// Binary Tree or not. A binary tree is balanced if, for all nodes in the tree, 
// the difference between left and right subtree height is not more than 1.


#include<iostream>
using namespace std;
struct Node{
    int data;
    struct Node *left;
    struct Node *right;
    Node(int val) {
        data = val;
        left = right = NULL;
    }
};
int maxdepth(Node *root){
    if(root==NULL){
        return 0;
    }
    int lh=maxdepth(root->left);
    int rh=maxdepth(root->right);

    return 1+ max(lh,rh);
}

bool isBalanced(Node *root)
    {
        //  Your Code here
        
        if(root==NULL){
            return true;
        }
        
        int left=isBalanced(root->left);
        int right=isBalanced(root->right);
        
        int diff=abs(maxdepth(root->left)-maxdepth(root->right))<=1 ;
        
        if(left&&right&&diff){
            return true;
        }
        else{
            return false;
        }
    }

int main(){
    Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);

    cout<<isBalanced(root);

    return 0;
}