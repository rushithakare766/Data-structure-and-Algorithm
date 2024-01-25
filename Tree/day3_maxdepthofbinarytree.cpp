//AUthor : Rushikesh Thakare

// Maximum depth of a Binary Tree
// Problem Statement: Find the Maximum Depth of Binary Tree. Maximum Depth is the count of nodes of the longest path from the root node to the leaf node.

// Examples:

// Input Format: Given the root of Binary Tree

// 5 2 1 10 3 8 11 4 
// Result: 4

// Explanation: Maximum Depth in this tree is 4 if we follow path 5 – 1 – 3 – 8 or 5 – 1 – 3 – 11

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
int main(){
    Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);

    cout<<maxdepth(root);
return 0;
}