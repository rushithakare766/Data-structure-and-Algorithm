#include<iostream>
#include<bits/stdc++.h>
#include<stack>
using namespace std;

void nextsmallerelement(int arr[],int n){
    vector<int>v;
    stack<int>s;
    for(int i=n-1;i>=0;i--){
        while(!s.empty() && s.top()>=arr[i]){
            s.pop();
        }
        if(s.empty()){
            v.push_back(-1);
        }
        else{
            v.push_back(s.top());
        }
        s.push(arr[i]);
    }
    reverse(v.begin(),v.end());
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
}

int main(){
    int arr[] = {3,10,5,1,15,10,7,6};
    int n = sizeof(arr)/sizeof(arr[0]);
    nextsmallerelement(arr,n);
    
}