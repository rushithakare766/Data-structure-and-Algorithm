//Author: Rushikesh Thakare 
//Question: subarray with zero sum 
//I.P: {1,4,13,-3,-10,5}
//O.P: yes

#include<iostream>
#include<bits/stdc++.h>
using namespace std;
// bool isosubarray(int arr[],int n){
//     for(int i=0;i<n;i++){
//         int curr_sum=0;
//         for(int j=i;j<n;j++){
//             curr_sum+=arr[j];
//             if(curr_sum==0){
//                 return "yes";
//             }
//         }
//     }
//     return "No";
// }
bool isosubarray(int arr[],int n){
    unordered_set<int>s;
    int presum=0;
    for(int i=0;i<n;i++){
        presum+=arr[i];
        s.insert(presum);
        if(s.find(presum)!=s.end()){
            return true;
        }
        if(presum==0){
            return true;
        }
    }
    return false;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    if(isosubarray(arr,n)){
        cout<<"yes";
    }
    else{
        cout<<"No";
    }

return 0;
}