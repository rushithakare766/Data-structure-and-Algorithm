#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int gcd(int a,int b){
    a,b=max(a,b),min(a,b);
    if(b==0){
        return a;
    }
    else{
        return gcd(b,a%b);
    }
}
int main(){
    int a,b;
    cin>>a>>b;
    int ans=gcd(a,b);
    int x=0;
    int y=0;
    while(y>=x){
        y=(ans-(a*x))/b;
        if (x==x) and (y==y){
            cout<<x<<y<<ans<<endl;
            break;
        }
        else{
            x-=1;
        }

    }
    return 0;
}