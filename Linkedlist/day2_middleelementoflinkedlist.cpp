//Author: Rushikesh Thakare

// Find middle element in a Linked List
// Problem Statement: Given the head of a singly linked list, return the middle node of the linked list. If there are two middle nodes, return the second middle node.

// Input Format: 
// Input: head = [1,2,3,4,5,6]

// Result: [4,5,6]

// Explanation: 
// Since the list has two middle nodes with values 3 and 4, we return the second one.


#include<iostream>
using namespace std;
struct Node{
    int data;
    Node *next;
    Node(int x){
        data=x;
        next=NULL;
    }
};
//iterative approach
// Node* middlenode(Node *head){
//     int n=0;
//     Node *temp=head;
//     while(temp!=NULL){
//         n++;
//         temp=temp->next;
//     }
//     temp=head;
//     for(int i=0;i<n/2;i++){
//         temp=temp->next;
//     }
//     return temp;
// }

// efficient approach 
Node *middlenode(Node *head){
    Node *slow=head,*fast=head;
    while(fast&&fast->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
    }
    return slow;
}
int main(){
Node *head=new Node(10);
head->next=new Node(20);
head->next->next=new Node(30);
head->next->next->next= new Node(40);
head->next->next->next->next= new Node(50);
cout<<middlenode(head)->data;
return 0;
}