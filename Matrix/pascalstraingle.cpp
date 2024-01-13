#include<iostream>
using namespace std;
int main(){
    // print 1 row in pascals traingle 
    int n=6;
    int ans=1;
    cout<<ans<<" ";
    for(int i=1;i<n;i++){
        ans=ans*(n-i);
        ans=ans/(i);
        cout<<ans<<" ";
    }
return 0;
}