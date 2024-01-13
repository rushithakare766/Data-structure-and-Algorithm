#include<iostream>
#include<stack>
using namespace std;
int main(){

    string s = "{([])}";
    stack<char>st;
    for(int i=0;i<s.length();i++){
        char ch = s[i];


        
        //if opening bracket  ,stack push 
        //if close bracket stackcheck and pop
        if(ch=='(' || ch=='{' || ch=='[')
        {
            st.push(ch);
        }
        else{
            if(!st.empty()){
                char top = st.top();
                if((ch==')' && top=='(') || //if(matches(top,ch))
                (ch==']' && top=='[') ||
                (ch=='}' && top=='{'))
                {
                    st.pop();
                }   
                else
                {
                cout<<false<<endl;
            }
        }
        else
        {
        cout<<false<<endl;
        }
    }
    }
    if(st.empty()){
        cout<<true<<endl;
    }
    else{
        cout<<false<<endl;
    }
}

