// Author : Rushikesh Thakare
// Given two arrays A and B respectively of size N and M, the task is to print the count of elements in the intersection (or common elements) of the two arrays.

// For this question, the intersection of two arrays can be defined as the set containing distinct common elements between the two arrays. 

// Example 1:

// Input:
// 5 3
// 89 24 75 11 23
// 89 2 4

// Output: 
// 1

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

    int res=0;
    for(int j=0;j<n;j++){
        if(s.find(arr1[j])!=s.end()){
            res++;
            s.erase(arr1[j]);
        }
    }
    cout<<res<<endl;
    //naive approach 
    // int res=0;
    // for(int i=0;i<n;i++){
    //     bool flag=false;
    //     for(int j=0;j<i-1;j++){
    //         if(arr[j]==arr[i]){
    //             flag=true;
    //             break;
    //         }
    //     }
    //     if(flag==true){
    //         continue;
    //     }
    //     for(int j=0;j<n1;j++){
    //         if(arr[i]==arr1[j]){
    //             res++;
    //             break;
    //         }
    //     }
    // }
    // cout<<res<<endl;
return 0;
}