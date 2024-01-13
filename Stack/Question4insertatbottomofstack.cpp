#include<iostream>
#include<stack>
using namespace std;
void solve(stack<int>&s,int x){
    // base case 
    if(s.empty()){
        s.push(x);
        return ;
    }
    int num = s.top();
    s.pop();

    //recursive call 
    solve(s,x);

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
    int x = 9;
    solve(s,x);
    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }
}