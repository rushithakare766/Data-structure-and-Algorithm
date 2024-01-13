#include<iostream>
#include<stack>
using namespace std;
int main(){
    //LIFO - Last In first Out
    stack<int>s;
    s.push(20);
    s.push(10);
    s.push(50);
    cout<<s.top()<<endl;
    s.pop();
    s.pop();
    s.pop();
    //cout<<s.top()<<endl;
    cout<<s.size()<<" "<<endl;
    if(s.empty()){
        cout<<"stack is underflow"<<endl;
    }
    else{
        cout<<"stack is overflow"<<endl;
    }
}