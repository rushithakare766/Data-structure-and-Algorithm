
// Author: Rushikesh Thakare
//Question: frog jump with k distance 
// There is an array of heights corresponding to 'n' stones. You have to reach from stone 1 to stone ‘n’.
// From stone 'i', it is possible to reach stones 'i'+1, ‘i’+2… ‘i’+'k' , and the cost incurred will be 
// | Height[i]-Height[j] |, where 'j' is the landing stone.

// Return the minimum possible total cost incurred in reaching the stone ‘n’.

// Example:
// For 'n' = 3 , 'k' = 1, height = {2, 5, 2}.

// Answer is 6.
// Initially, we are present at stone 1 having height 2. We can only reach stone 2 as ‘k’ is 1. So, cost incurred is 
// |2-5| = 3. Now, we are present at stone 2, we can only reach stone 3 as ‘k’ is 1. 
// So, cost incurred is |5-2| = 3. So, the total cost is 6.

#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int solveutil(int n,vector<int>&height,vector<int>&dp,int k){
    dp[0]=0;
    for(int i=1;i<n;i++){
        int min_step=INT_MAX;

        for(int j=1;j<=k;j++){
            if(i-j>=0){
                int one_jump=dp[i-j]+abs(height[i]-height[i-j]);
                min_step=min(one_jump,min_step);
            }
        }
        dp[i]=min_step;
    }
    return dp[n-1];
}

int solve(int n,vector<int>&height,int k){
    vector<int>dp(n,-1);
    return solveutil(n,height,dp,k);
}
int main(){
    vector<int>height{30, 10, 60, 10, 60, 50};
    int n=height.size();
    int k=2;
    vector<int>dp(n,-1);
    cout<<solve(n,height,k)<<endl;
return 0;
}

