// #include<iostream>
// using namespace std;
// int main(){
//     int fibb(int i);
//     int num,fact=1,rev=0;
//     cin>>num;
//     // while (num>0){
//     //     fact=fact*num;
//     //     num-=1;
//     // }
//     // cout<<"factorial is : "<<fact;


//     // while (num>0)
//     // {
//     //     rev=rev*10+(num%10);
//     //     num=num/10;
//     // }
//     // cout<<"reverse is : "<<rev;
//     for(int i = 0;i<num;i++){
//         cout<<(fibb(i));
//     }
//     return 0;
// }
// int fibb(int i){
//         if (i==0 || i==1){
//             return 1;
//         }
//         else{
//             return i+fibb(i-1);
//         }
// }
// #include<iostream>
// using namespace std;

// int fibb(int);
// int main() {
//     int n;
//     cin >> n;
//     for(int i = 0; i < n; i++) {
//         cout << fibb(i) << " ";
//     }

//     return 0;
// }

// int fibb(int i) {
//     if(i == 0 || i == 1) {  // Adjusted condition to include the first term (0)
//         return i;
//     }
//     else {
//         return fibb(i - 1) + fibb(i - 2);
//     }
// }
 
 #include<iostream>
 using namespace std;
 int main(){
    int start,end,sum=0,pd=1;
    cin>>start>>end;
    for(int i=start;i<=end;i++){
        sum=sum+i;
        pd=pd*i;    
    }
    cout<<sum<<endl;
    cout<<pd;
    return 0;
 }