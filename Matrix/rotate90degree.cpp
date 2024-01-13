#include<iostream>
using namespace std;
int main(){
    int arr[4][4];
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            cin>>arr[i][j];
        }
    }
    int ans[4][4];
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            ans[j][3-i]=arr[i][j];
        }
    }

    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
return 0;
}