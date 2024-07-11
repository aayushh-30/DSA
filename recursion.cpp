// #include<iostream>
// using namespace std;
// long long int fact(int n){
//     if (n==0 || n==1)
//     return 1;
//     else{
//         return n*fact(n-1);
//     }
// }
// int main(){
//     int n;
//     cin>>n;
//     long long int factorial=fact(n);
//     cout<<factorial;


//     return 0;
// }

//FIBBNICO SERIES

// #include<iostream>
// #include<stdlib.h>
// using namespace std;
// int fibb(int a){
//     if (a==0||a==1) return 1;
//     else{
//         return fibb(a-1)+fibb(a-2);
//     }
// }
// int main(){
//     int n;
//     cin>>n;
//     for(int i=0;i<n;i++){
//         int k=fibb(i);
//         cout<<k<<endl;
//     }


//     return 0;
// }


//SUM OF DIGITS OF AA NUMBER

// #include<iostream>
// using namespace std;
// int digit_sum(int n){
//     if(n>=0 && n<=9) return n;
//     else{
//         return n%10+digit_sum(n/10);
//     }
// }
// int main(){
//     int n;
//     cin>>n;
//     int sum = digit_sum(n);
//     cout<<sum;
//     return 0;
// }

#include<iostream>
using namespace std;
int power(int n,int k){
    if(k==0) return 1;
    else{
        return n*power(n,k-1);
    }
}
int main(){
    int n,k;
    cin>>n>>k;

    int result = power(n,k);
    cout<<result;
    return 0;
}