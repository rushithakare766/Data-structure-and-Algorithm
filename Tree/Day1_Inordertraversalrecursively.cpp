// Author : Rushikesh Thakare 
#include<iostream>
using namespace std;

struct Node{
    int data;
    struct Node*left;
    struct Node*right;

    Node(int val){
        data=val;
        left=right=NULL;
    }

};
void printinorder(struct Node *node){
    if(node==NULL){
        return;
    }
    printinorder(node->left);

    cout<<node->data<<" ";

    printinorder(node->right);


}
int main()
{
Node *root=new Node(1);
root->left=new Node(2);
root->right=new Node(3);
root->left->left=new Node(4);
root->left->right=new Node(5);

cout << "Inorder traversal of binary tree is \n";
printinorder(root);


;}