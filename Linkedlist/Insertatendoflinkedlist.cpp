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
void printlist(Node *head){
    Node *curr = head;
    while(curr!=NULL){
        cout<<curr->data<<" ";
        curr=curr->next;
    }
    cout<<endl;
}
Node *insertatend(Node *head,int data){
    Node *temp = new Node(data);
    if(head==NULL){
        return temp;
    }
    Node *curr=head;
    while(curr->next!=NULL){
        curr=curr->next;
    }
    curr->next=temp;
    return head;
}
int main(){
Node *head = new Node(10);
Node *temp1 = new Node(20);
Node *temp2 = new Node(30);
head->next=temp1;
temp1->next=temp2;
cout<<"Before Insertion"<<" "<<endl;
printlist(head);
cout<<"After Insertion"<<" "<<endl;
head = insertatend(head,40);
printlist(head);
}
