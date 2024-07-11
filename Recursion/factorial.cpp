#include<iostream>
using namespace std;

//factorial
int factorial(long long n){
    if(n==0 || n==1){
        return 1;
    }
    else{
        return n*factorial(n-1);
    }
}

//power function
int power(int a,int b){
    if(a==0) return 0;
    else if(a==1 || b==0) return 1;
    else{
        return a*power(a,b-1);
    }
}

//counting print
int count (int x){
    if(x==0){
        return x;
    }
    else{
        cout<<x<<" ";
        return count(x-1);
    }
}

//fibbnico series
int fibb(int x){
        if(x==0||x==1){
           return 1;
        }
        else{
            int k = fibb(x-1)+fibb(x-2);
            return k;
        }
    }
int main(){
    int n;
    cin>>n;
    // cin>>m;
    for(int i=0;i<n;i++){
        cout<<fibb(i)<<" ";

    }

    return 0;

}