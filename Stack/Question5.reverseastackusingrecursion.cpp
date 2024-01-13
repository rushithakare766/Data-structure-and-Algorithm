#include<iostream>
#include<stack>
using namespace std;
void insertbottom(stack<int>&s1,int element){
    //base case 
    if(s1.empty()){
        s1.push(element);
        return ;
    }
    int num = s1.top();
    s1.pop();

    //recursive call 
    insertbottom(s1,element);

    s1.push(num);
}
void reverse(stack<int>&s){
    //base class 
    if(s.empty()){
        return ;
    }

    int num = s.top();
    s.pop();

    //recursvie call 
    reverse(s);
    insertbottom(s,num);
}

int main(){
    stack<int>s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    int n = s.size();
    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }
}