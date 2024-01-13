#include<iostream>
using namespace std;
struct Node{
    int data;
    Node *next ;
    Node(int x){
        data=x;
        next=NULL;
    }
};


void printlist(Node *head)
{
Node *curr = head;
while(curr!=NULL){
    cout<<curr->data<<" ";
    curr=curr->next;
}
cout<<endl;
} 


Node *insertbegin(Node *head,int data){
    Node *temp = new Node(data);
    temp->next=head;
    head=temp;
    return head;
}
int main(){
Node *head = new Node(10);
head->next = new Node(20);
head->next->next = new Node(30);
cout<<"Before Insertion"<<" "<<endl;
printlist(head);
cout<<"After insertion"<<" "<<endl;
head = insertbegin(head,40);
printlist(head);
return 0;

}