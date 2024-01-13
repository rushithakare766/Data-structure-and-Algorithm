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
    Node *curr=head;
    while(curr!=NULL){
        cout<<curr->data<<" ";
        curr=curr->next;
    }
    cout<<endl;
}

Node *deletelastnode(Node *head)
{
if(head==NULL){
    return NULL;
}
else if(head->next==NULL){
    delete head;
    return NULL;
}
else{
Node *temp = head;
while(temp->next->next!=NULL)
{
    temp = temp->next;
}
delete (temp->next);
temp->next=NULL;
return head;
}
}
int main(){
Node *head=new Node(10);
head->next=new Node(20);
head->next->next = new Node(30);
head->next->next->next = new Node(40);
head->next->next->next->next = new Node(50);
cout<<"Before Deletion"<<endl;
printlist(head);
cout<<"After Deletion"<<endl;
head = deletelastnode(head);
printlist(head);
return 0;
}