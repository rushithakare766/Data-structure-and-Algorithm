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
// Iterative method
int count(Node *head){
    int count=0;
    while(head!=NULL){
        count++;
        head=head->next;
    }
    return count;
}

//recursive Method 
int count1(Node *head){
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
head->next->next = new Node(30);
cout<<count(head)<<endl;
cout<<count1(head);
}