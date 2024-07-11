#include<iostream>
using namespace std;
int main(){

    int n,k,w,sum=0;
    cin>>k;//cost of one banana;
    cin>>n;//dollar he has;
    
    cin>>w;//no. of bananas;
    for(int i=1;i<=w;i++){
        sum = sum + (i*k); 
    }

    if(sum>n){
        cout<<sum-n;
    }
    else{
        cout<<"0";
    }
    return 0;
}