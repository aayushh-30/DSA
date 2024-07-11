#include<iostream>
using namespace std;
 int trailingZeroes(int n) {
        int k = n;
        int twocount = 0;
        int fivecount = 0;
        while(k%2==0 && k>0){
            twocount++;
            k/=2;
        }
        cout<<twocount<<endl;
        while(n%5==0 && n>0){
            fivecount++;
            n/=5;
        }
        cout<<fivecount<<endl;

        return min(twocount,fivecount);
    }
int main(){
    int n;
    cin>>n;
    cout<<trailingZeroes(n);
}