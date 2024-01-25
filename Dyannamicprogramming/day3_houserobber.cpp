//AUthor : Rushikesh Thakare
// A thief needs to rob money in a street. The houses in the street 
// are arranged in a circular manner. Therefore the first and the 
// last house are adjacent to each other. The security system in 
// the street is such that if adjacent houses are robbed, 
// the police will get notified.

// Given an array of integers “Arr” which represents money at each house,
//  we need to return the maximum amount of money that the thief can 
//  rob without alerting the police.

// example: 
//n=4 
//arr=[2,1,4,9];
//output: 10 

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int solve(vector<int>& arr){
    int n=arr.size();

    vector<int>dp(n,-1);
    dp[0]=arr[0];
    for(int i=1;i<n;i++){
        int pick=arr[i];
        if(i>1){
            pick+=dp[i-2];
        }
        int notpick=0+dp[i-1];
        dp[i]=max(pick,notpick);
    }
    return dp[n-1];
}
int robStreet(int n, vector<int> &arr){
    vector<int> arr1;
    vector<int> arr2;
    
    if(n==1)
       return arr[0];
    
    for(int i=0; i<n; i++){
        
        if(i!=0) arr1.push_back(arr[i]);
        if(i!=n-1) arr2.push_back(arr[i]);
    }
    
    long long int ans1 = solve(arr1);
    long long int ans2 = solve(arr2);
    
    return max(ans1,ans2);
}

int main(){
    vector<int>arr{2,1,4,9};
    int n=arr.size();
    cout<<robStreet(n,arr);
return 0;
}