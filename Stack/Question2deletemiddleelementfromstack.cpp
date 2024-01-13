#include<iostream>
#include<stack>
using namespace std;
void solve(stack<int>&s,int count,int n){
    //base case 
    if(count==n/2){
        s.pop();
        return; 
    }
    int num = s.top();
    s.pop();

    //recursive call 
    solve(s,count+1,n);
    s.push(num);
}
int main(){
    stack<int>s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    int n = s.size();
    int count=0;
    solve(s,count,n);
    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }
}