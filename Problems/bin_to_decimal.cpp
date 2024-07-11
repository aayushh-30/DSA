#include<iostream>
using namespace std;
int fun( int n){
    int ans = 0;
    int base = 1;
    while(n>0){
        ans = ans + (n%10)*base;
        base*=2;
        n/=10;
    }
    return ans;
}
int main(){
    int n;
    cin>>n;
    cout<<fun(n);
    return 0;
}