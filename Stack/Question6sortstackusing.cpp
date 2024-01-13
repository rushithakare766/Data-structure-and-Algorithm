#include<iostream>
#include<stack>
using namespace std;
void sortedinsert(stack<int>&s,int num){
    if(s.empty()|| s.top()<num){
        s.push(num);
        return ;
    }
    int n=s.top();
    s.pop();

    //recursive class 
    sortedinsert(s,num);
    s.push(n);
}

void sortstack(stack<int>&s){
    if(s.empty()){
        return;
    }

    int num = s.top();
    s.pop();

    //recursive class 
    sortstack(s);
    sortedinsert(s,num);
}
int main(){
    stack<int>s;
    s.push(11);
    s.push(2);
    s.push(32);
    s.push(3);
    s.push(41);
    int n = s.size();
    sortstack(s);
    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }
}