#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>ans;
    int arr[4][4];
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            cin>>arr[i][j];
        }
    }

    int top=0,bottom=4-1;
    int left=0,right=4-1;

    while(top<=bottom && left<=right){
        for(int i=left;i<=right;i++){
            ans.push_back(arr[top][i]);
        }
        top++;

        for(int i=top;i<=bottom;i++){
            ans.push_back(arr[i][right]);
        }
        right--;

        if(top<=bottom){
            for(int i=right;i>=left;i--){
                ans.push_back(arr[bottom][i]);
            }
            bottom--;
        }
        if(left<=right){
            for(int i=bottom;i>=top;i--){
                ans.push_back(arr[i][left]);
            }
            left++;
        }
    }

    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    
    return 0;
}