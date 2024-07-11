#include<iostream>
#include<vector>
using namespace std;

int fib(int n){
    if(n==0 || n==1){
        return 1;
    }
    return fib(n-1)+fib(n-2);
}

vector<int> ans;

int main(){
    
    int a;
    cin>>a;
    for(int i=0;i<a;i++){

        int l = fib(i);
        ans.push_back(l);

    }
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }


    return 0;
}