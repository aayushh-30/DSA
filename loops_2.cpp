// #include<iostream>
// using namespace std;
// int main(){
//     int n,count=0;
//     cin>>n;
//     if (n==0){
//         cout<<1;
//     }
//     else{
//     while(n>0){
//         if(n%10>=0){
//             count+=1;
//         }
//         n=n/10;

//     }
//     cout<<count;
//     }

//     return 0;
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int n,sum=0,rev=0;
//     cin>>n;
//     while(n>0){
//         rev=rev*10+(n%10);
//         sum=sum+n%10;
//         n=n/10;
//     }
//     cout<<"SUM IS : "<<sum<<endl;
//     cout<<"REVERSE IS : "<<rev;
//     return 0;
// }

#include<iostream>
using namespace std;
int main(){
    int n,res=0;
    cin>>n;
    for(int i=0;i<=n;i++){
        if (i%2==0){
            res=res+i;
            
        }
        else{
            res-=i;
        }
    }
    cout<<res;
    
    return 0;
}