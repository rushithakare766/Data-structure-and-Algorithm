#include<iostream>
using namespace std;
struct Node{
    int data;
    Node *next;
    Node(int x){
        data = x;
        next = NULL;
    }
};
//Display Fucntion 
void printlist(Node *head){
Node *curr=head;
while(curr!=NULL){
    cout<<curr->data<<" ";
    curr=curr->next;
}
};
Node *reverselinked(Node *head)
{
    if(head==NULL || head->next==NULL){
        return head;
    }

    Node *prev=NULL;
    Node *curr=head;
    Node *forward=NULL;

    while(curr!=NULL){
        forward=curr->next;
        curr->next=prev;
        prev=curr;
        curr=forward;
    }
    return prev;
}
int main(){
Node *head = new Node(10);
head->next = new Node(20);
head->next->next = new Node(30);
head->next->next->next = new Node(40);
head->next->next ->next->next= new Node(50);
printlist(head);
head=reverselinked(head);
cout<<endl;
printlist(head);
return 0;
}