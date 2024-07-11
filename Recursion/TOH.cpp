#include<iostream>
using namespace std;
void TOH(int n,char S,char D,char A){
    if(n==1){
        cout<<S<<"-->"<<D<<endl;
    }
    TOH(n-1,S,A,D);
    cout<<S<<"-->"<<D<<endl;
    TOH(n-1,A,D,S);
}
int main(){

    return 0;
}