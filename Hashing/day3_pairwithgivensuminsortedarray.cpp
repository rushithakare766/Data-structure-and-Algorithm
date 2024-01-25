//Author:Rushikesh Thakare 

//Question:pair with given sum in unsorted array 
//Input: {3,2,8,15,-8};
//sum=17 
//output: yes

#include<iostream>
#include<bits/stdc++.h>
using namespace std;
//iterative approach 
// bool ispair(int arr[],int n,int sum){
//     for(int i=0;i<n;i++){
//         for(int j=i+1;j<n;j++){
//             if(arr[i]+arr[j]==sum){
//                 return true;
//             }
//     return false;
// }
// }
// }
bool ispair(int arr[],int n,int sum){
    unordered_set<int>s;
    for(int i=0;i<n;i++){
        if(s.find(sum-arr[i])!=s.end()){
            return true;
        }
        s.insert(arr[i]);
    }
    return false;
}
int main()
{
    //tc=o(nlogn)+o(n);
    int n;
    cin>>n;
    int sum;
    cin>>sum;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    if(ispair(arr,sum,n)){
        cout<<"yes"<<endl;
    }
    else{
        cout<<"no"<<endl;
    }
    return 0;

}