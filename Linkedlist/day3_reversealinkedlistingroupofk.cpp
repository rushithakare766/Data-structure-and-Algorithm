//Author: RUshikesh Thakare 
//reverse a linked list in k group 
// I.P : 10 20 30 40 50 
//k = 3
//O.P : 30 40 50
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

Node *reverseinkgroup(Node *head,int k){
    Node *curr=head,*prevfirst=NULL;
    bool isfirstpass=true;
    if(head==NULL){
        return NULL;
    }
    while(curr!=NULL){
    int count=0;
    Node *first=curr;
    Node*next=NULL;
    Node *prev=NULL;
    while(curr!=NULL && count<k){
        
        next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
        count++;
    }

    if(isfirstpass){
        head=prev;
        isfirstpass=false;
    }
    else{
        prevfirst->next=prev;
    }
    prevfirst=first;
    }
    return head;
    // if (next != NULL) {
    //     head->next = reverseinkgroup(next, k);
    // }

    // return prev;

}

void printlist(Node *head){
Node *curr=head;
while(curr!=NULL){
    cout<<curr->data<<" ";
    curr=curr->next;
}
};
int main(){
int k=3;
Node *head=new Node(10);
head->next=new Node(20);
head->next->next=new Node(30);
head->next->next->next= new Node(40);
head->next->next->next->next= new Node(50);
Node *result=reverseinkgroup(head,k);
printlist(result);
return 0;
}