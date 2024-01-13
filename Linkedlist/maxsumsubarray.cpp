#include<iostream>
using namespace std;
int main()
{
    int arr[5]={10,20,30,40,50};
    int ans=arr[0];
    int sum=0;
    int length=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<length;i++){
        for(int j=0;i<length;j++){
            sum+=arr[j];
            ans=max(ans,sum);
        }
    }
    cout<<ans<<endl;
    return 0;
}