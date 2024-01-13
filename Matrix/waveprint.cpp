#include<iostream>
#include<vector>
using namespace std;
int main(){

    /*
    1 2 3
    4 5 6
    7 8 9

    1 4 7
    8 5 2
    3 6 9
    */
     
    vector<int>ans;
    int arr[3][3];
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin>>arr[i][j];
        }
    }

    for(int j=0;j<3;j++){
        if(j&1){
            for(int i=3-1;i>=0;i--){
                ans.push_back(arr[i][j]);
            }
        }
        else{
            for(int i=0;i<3;i++){
                ans.push_back(arr[i][j]);
            }
        }
    }
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
        if((i+1)%3==0){
            cout<<endl;
        }
    }
    return 0;
}
