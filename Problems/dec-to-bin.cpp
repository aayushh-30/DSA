#include<iostream>
using namespace std;
int main(){
    int n,bin=0,i;
    cout<<"ENTER NUMBER : ";
    cin>>n;
    while(n!=0){
        i=n%2;
        bin=bin*10+i;
        n=n/2;
    }
    cout<<"REV BIN FORM : "<<bin<<endl;

    int rev=0;
    while(bin!=0){
        rev=rev*10+bin%10;
        bin=bin/10;
    }
    cout<<"BIN FORM : "<<rev;
    return 0;
}