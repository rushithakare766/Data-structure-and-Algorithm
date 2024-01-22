//Author:Rushikesh Thakare

//Question 1 
// Hashing is very useful to keep track of the frequency of the elements in a list.

// You are given an array of integers. You need to print the count of  elements in the array.

// Example 1:

// Input:
// 10
// 1 1 2 2 3 3 4 5 6 7

// Output: 
// 7 

#include<iostream>
#include<unordered_set>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    //efficient approach 

    unordered_set<int>s;
    for(int i=0;i<n;i++){
        s.insert(arr[i]);
    }

    cout<<s.size()<<endl;

    
    //naive approach 
    // int res=0;
    // for(int i=0;i<n;i++){
    //     bool flag=false;
    //     for(int j=0;j<i;j++){
    //         if(arr[i]==arr[j]){
    //             flag=true;
    //             break;
    //         }
    //     }
    //     if(flag==false){
    //         res++;
    //     }
    // }
    // cout<<res;
return 0;
}
