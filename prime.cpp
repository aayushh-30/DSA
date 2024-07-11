#include<iostream>
using namespace std;
int main(){

    int n;
    cin>>n;
    cout<<"PRIMR NUMBER FRON 0 TO "<<n<<" ARE : ";
    for(int i=2;i<n;i++){
        for(int j=2;j<i;j++){
            if(i%j==0){
                break;
            }
            else{
                cout<<i<<" ";
                break;
            }
        }

    }
    return 0;
}