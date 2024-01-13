#include<iostream>
#include<stack>
using namespace std;

void previoussmallerelement(int arr[],int n){
    stack<int>s;
    for(int i=0;i<n;i++){
        while(!s.empty() && s.top()>=arr[i]){
            s.pop();
        }
        if(s.empty()){
            cout<<-1<<" ";
        }
        else{
            cout<<s.top()<<" ";
        }
        s.push(arr[i]);
    }
}

int main(){
    int arr[] = {4,10,5,8,20,15,3,12}; //{-1,4,4,5,8,8,-1,3}
    int n = sizeof(arr)/sizeof(arr[0]);
    previoussmallerelement(arr,n);

}