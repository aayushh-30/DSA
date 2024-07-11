// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"ENTER NUMBER OF ROWS : ";
//     cin>>n;
//     //INVERTED PATTERNS ----- RIGHT ANGLE TRIANGLE
//     // for(int i=n;i>0;i--){
//     //     for(int j=1;j<=i;j++){
//     //         cout<<i ;
//     //     }
//     //     cout<<endl;
//     // }
//     // UPRIGHT PATTERN ----- RIGHT ANGLE TRIANGLE

//     // for(int i=1;i<=n;i++){
//     //     for(int j=1;j<=i;j++){
//     //         cout<<j;
//     //     }
//     //     cout<<endl;
//     // }

//     for(int i=0;i<n;i++){
//         for(int j=1;j<=n-1;j++){
//             cout<<"*";
//         }
//         cout<<endl;
//      }
//     return 0;
// }

#include<iostream>
using namespace std;
int main(){
int n,rev=0;
cin>>n;
while(n>0){
    rev=rev*10+(n%10);
    n=n/10;

}
cout<<rev;
}