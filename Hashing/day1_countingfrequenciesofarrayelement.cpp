//Author: Rushikesh Thakare

// Given an array which may contain duplicates, print all elements and their frequencies.

// Examples: 

// Input :  arr[] = {10, 20, 20, 10, 10, 20, 5, 20}
// Output : 10 3
//          20 4
//          5  1

// Input : arr[] = {10, 20, 20}
// Output : 10 1
//          20 2 


#include<iostream>
#include<unordered_map>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    //efficient approach 
    unordered_map<int,int>mp;
    for(auto it:arr){
        mp[it]++;
    }

    for(auto it:mp){
        cout<<it.first<<" "<<it.second<<endl;
    }
    //Naive Approach 
    // for(int i=0;i<n;i++){
    //     bool flag=false;
    //     for(int j=0;j<i;j++){
    //         if(arr[i]==arr[j]){
    //             flag=true;
    //             break;
    //         }
    //     }
    //     if(flag==true)continue;
    //     int freq=1;
    //     for(int j=i+1;j<n;j++){
    //         if(arr[i]==arr[j]){
    //             freq++;
    //         }
    //     }
    //     cout<<arr[i]<<" "<<freq<<endl;
    // }
return 0;
}
