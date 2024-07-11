#include<iostream>
using namespace std;
//function overloading

int add(int a,int b){
    cout<<a+b;
}
int add(int a,float b){
    cout<<a+b;
}
int main(){
    int a,b;
    cin>>a>>b;
    float k;
    cin>>k;
    add(a,k);

    return 0;
}