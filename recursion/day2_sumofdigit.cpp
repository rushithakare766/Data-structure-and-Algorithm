#include<iostream>
using namespace std;
int getsum(int num){
    if(num<=9){
        return num;
    }
    return getsum(num/10)+num%10;
}
int main(){
    int n=871;
    cout<<getsum(n);
return 0;
}