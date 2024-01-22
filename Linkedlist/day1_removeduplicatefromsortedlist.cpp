//Author : Rushikesh Thakare 

// Given a singly linked list consisting of N nodes. The task is to remove duplicates (nodes with duplicate values) from the given list (if exists).
// Note: Try not to use extra space. The nodes are arranged in a sorted way.

// Example 1:

// Input:
// LinkedList: 2->2->4->5
// Output: 2 4 5
// Explanation: In the given linked list 
// 2 ->2 -> 4-> 5, only 2 occurs more 
// than 1 time. So we need to remove it once.

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


Node *removeDuplicates(Node *head)
{
Node *curr=head;
 while(curr->next!=NULL){
     if(curr->data==curr->next->data){
     curr->next = curr->next->next;
     }
     else{
         curr=curr->next;
     }
 }
 return head;
}

void printlist(Node *head){
Node *curr=head;
while(curr!=NULL){
    cout<<curr->data<<" ";
    curr=curr->next;
}
};

int main(){
Node *head = new Node(10);
head->next = new Node(10);
head->next->next = new Node(20);
head->next->next->next =new Node(30);
Node *result=removeDuplicates(head);
printlist(result);
return 0;
}
