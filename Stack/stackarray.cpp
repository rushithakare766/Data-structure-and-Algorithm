#include<iostream>
using namespace std;

struct mystack{
    int *arr;
    int cap;
    int top;

    mystack (int c){
        cap=c;
        arr=new int[cap];
        top=-1;
    }

    void push(int x){
        //top==cap-1; overflow
        top++;
        arr[top]=x;
    }
    int pop(){
        //top==-1 underflow
        int res=arr[top];
        top--;
        return res;
    }

    int peek(){
        //top==-1 stack is empty
        return arr[top];
    }

    int size(){
        return top+1;
    }
    bool isempty(){
        return (top==-1);
    }
};
int main()
{

    mystack s(5);
    s.push(5);
    s.push(10);
    s.push(15);

    cout<<s.pop()<<endl;
    cout<<s.size()<<endl;
    cout<<s.peek()<<endl;
    cout<<s.isempty()<<endl;
}