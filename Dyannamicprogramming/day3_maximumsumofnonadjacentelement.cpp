//Author : Rushikesh Thakare 

// Maximum sum of non-adjacent elements (DP 5)
// In this article we will solve the problem: Maximum sum of non-adjacent elements (DP 5)

// Problem Statement:

// Given an array of ‘N’  positive integers, we need to return 
// the maximum sum of the subsequence such that no two elements of the 
// subsequence are adjacent elements in the array.

// example:
// n=3 
// arr=[1,2,4]
// sum=5 

#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> arr{2, 1, 4, 9};
    int n = arr.size();
    vector<int>dp(n,-1);
    dp[0]=arr[0];

    for(int i=1;i<n;i++){
        int pick=arr[i];
        if(i>1){
            pick+=dp[i-2];
        }
        int notpick=dp[i-1];
        dp[i]=max(pick,notpick);
    }
    cout<<dp[n-1];

return 0;
}