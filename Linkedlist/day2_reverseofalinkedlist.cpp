//Author: Rushikesh Thakare 
// Reverse a Linked List
// Problem Statement: Problem Statement: Given the head of a singly linked list, write a program 
// to reverse the linked list, and return the head pointer to the reversed list.

// Input Format:


// LL: 1   3   2   4 

// output:
// 4 2 3 1 

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
Node* reverseLinkedList(Node* head) {
    if(head==NULL){
        return NULL;
    }
    Node *curr=head;
    Node *prev=NULL;
    Node *next=NULL;

    while(curr!=NULL){
        next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
    }
    return prev;
}

void printlist(Node *head){
Node *curr=head;
while(curr!=NULL){
    cout<<curr->data<<" ";
    curr=curr->next;
}
};

int main(){
Node *head=new Node(10);
head->next=new Node(20);
head->next->next=new Node(30);
head->next->next->next= new Node(40);
head->next->next->next->next= new Node(50);
Node *result=reverseLinkedList(head);
printlist(result);
return 0;
}