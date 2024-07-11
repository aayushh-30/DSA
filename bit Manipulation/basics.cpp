#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
#include <math.h>
using namespace std;

void fun(int n){
    vector<int> ans;
    while(n>0){
        int rem = n % 2;
        ans.push_back(rem);
        n = n/2;
    }
    reverse(ans.begin(),ans.end());
    for(int i=0;i<ans.size();i++){
        cout<<ans[i];
    }
}

//using recursion
void fun2(int n){
    if(n==0||n==1){
        cout<<n;
        return;
    }
    fun2(n/2);
    cout<<n%2;

}

//
int BinToNum(vector<int> &num){
    reverse(num.begin(),num.end());
    int ans  = 0;
    for(int i=0;i<num.size();i++){
        ans+=num[i]*pow(2,i);

    }
    return ans;
}
int main(){

    int n;
    cin>>n;
    fun2(n);
    

    return 0;
}