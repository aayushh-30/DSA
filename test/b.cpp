#include<iostream>
using namespace std;
int main(){

    int n;
    cin>>n;
    int count = 0;
    while(n!=1){
        if(n%5==0){
            n = (4*n)/5;
            count++;
        }
        else if(n%3==0){
            n = (2*n)/3;
            count++;
        }
        else if(n%2==0){
            n = (n)/2;
            count++;
        }
        else{
            cout<<-1;
            break;
        }
    }
    cout<<count

    return 0;
}