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
Node *deletehead(Node *head){
    if(head==NULL){
        return NULL;
    }
    Node *temp = head->next;
    delete head;
    return temp;
}
int main(){
Node *head = new Node(10);
head->next = new Node(20);
head->next->next = new Node(30);
cout<<"Before Deletion"<<" "<<endl;
printlist(head);
cout<<"After Deletion"<<" "<<endl;
head = deletehead(head);
printlist(head);
}
