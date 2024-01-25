//Author: RUshikesh Thakare
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node *next;
    Node(int x){
        data=x;
        next=NULL;
    }
};

bool isloop(Node *head){
    unordered_set<Node*>s;
    for(Node *curr=head;curr!=NULL;curr=curr->next){
        if(s.find(curr)!=s.end()){
            return true;
        }
        s.insert(curr);
    }
    return false;
}
int main(){

Node *head=new Node(10);
head->next=new Node(20);
head->next->next=new Node(30);
head->next->next->next= new Node(40);
head->next->next->next->next= new Node(50);
head->next->next->next->next = head;

if (isloop(head))
        cout << "Loop Found";
    else
        cout << "No Loop";
return 0;
}