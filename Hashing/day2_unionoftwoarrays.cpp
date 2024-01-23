// Author : Rushikesh Thakare 

// Given two arrays A and B of size N and M respectively. The task is to find union between these two arrays.

// Union of the two arrays can be defined as the set containing distinct elements from both the arrays. If there are repetitions, then only one occurrence of element should be printed in union.

// Example 1:

// Input:
// 5 3
// 1 2 3 4 5
// 1 2 3

// Output: 
// 5

#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,n1;
    cin>>n>>n1;
    int arr[n];
    int arr1[n1];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n1;i++){
        cin>>arr1[i];
    }
    //efficient approach 
    unordered_set<int>s;
    for(int i=0;i<n;i++){
        s.insert(arr[i]);
    }
    for(int j=0;j<n1;j++){
        s.insert(arr1[j]);
    }

    cout<<s.size()<<endl;
    //naive approach
    // int c[n+n1];
    // for(int i=0;i<n;i++){
    //     c[i]=arr[i];
    // }
    // for(int j=0;j<n1;j++){
    //     c[n+j]=arr1[j];
    // }

    // int res=0;
    // for(int i=0;i<n+n1;i++){
    //     bool flag=false;
    //     for(int j=0;j<i;j++){
    //         if(c[i]==c[j]){
    //             flag=true;break;
    //         }
    //     }
    //     if(flag==false){
    //         res++;
    //     }
    // }
    // cout<<res;
return 0;
}