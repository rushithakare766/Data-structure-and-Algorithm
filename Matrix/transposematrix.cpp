#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){

    //transpose of Matrix 
    int arr[3][3];

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin>>arr[i][j];
        }
    }

    for(int i=0;i<3;i++){
        for(int j=i+1;j<3;j++){
            swap(arr[i][j],arr[j][i]);

            /*int temp=arr[i][j];
            arr[i][j]=arr[j][i];
            arr[j][i]=temp;
            */
        }
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<arr[i][j]<<" ";
    }
    cout<<endl;
    }
    return 0;
}