// Author : Rushikesh Thakare
// Given a singly linked list. The task is to find the length of the linked list, where length is defined as the number of nodes in the linked list.

// Example 1:

// Input:
// LinkedList: 1->2->3->4->5
// Output: 5
// Explanation: Count of nodes in the 
// linked list is 5, which is its length.


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

// //Iterative Method 
// int count(Node *head){
//     int count=0;
//     while(head!=NULL){
//         count++;
//         head=head->next;
//     }
//     return count;
// }

//recursive method 
int count(Node *head){
    if(head==0){
        return 0;
    }
    else{
        return count(head->next)+1;
    }
}


int main(){
Node *head = new Node(10);
head->next = new Node(20);
head->next->next= new Node(30);
cout<<count(head)<<endl;
return 0;
}