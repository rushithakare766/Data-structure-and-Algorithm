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
void printpostorder(struct Node *node){
    if(node==NULL){
        return;
    }
    printpostorder(node->left);

    printpostorder(node->right);

    cout<<node->data<<" ";


}
int main()
{
Node *root=new Node(1);
root->left=new Node(2);
root->right=new Node(3);
root->left->left=new Node(4);
root->left->right=new Node(5);

cout << "Postorder traversal of binary tree is \n";
printpostorder(root);

}