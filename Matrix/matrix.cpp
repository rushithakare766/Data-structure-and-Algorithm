#include <iostream>

using namespace std;

bool ispresent(int arr[][4],int target,int n,int m){
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            if(arr[i][j]==target){
                return 1;
            }
        }
    }
    return 0;
}

int main()
{
    int arr[3][4];
    
    //int arr[3][4]={1,2,3,4,5,6,7,8,9,10,11,12};
    
    //int arr[3][4]={{1,11,111,1111},{2,22,222,2222},{3,33,333,3333}};
    
    //row wise input
   for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            cin>>arr[i][j];
        }
    }
    
    /*
    //coloumn Wise input
    
    for(int i=0;i<4;i++){
        for(int j=0;j<3;j++){
            cin>>arr[j][i];
        }
    }
    */
    
    
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    
    cout<<"Element to be search"<<endl;
    int target;
    cin>>target;
    
    if(ispresent(arr,target,3,4)){
        cout<<"element found";
    }
    else{
        cout<<"element not found";
    }

    return 0;
}
