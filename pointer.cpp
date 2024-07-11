// #include<iostream>
// using namespace std;
// void swap(int *a,int *b){
//     int temp=*a;
//     *a=*b;
//     *b=temp;
// }
// int main(){
//     int a=78;
//     int b=98;
//     cout<<"a : "<<a<<endl<<"b : "<<b<<endl;
//     swap(&a,&b);
//     cout<<"AFTER SWAP : \n";
//     cout<<"a : "<<a<<endl<<"b : "<<b<<endl;
    

//     return 0;
// }

//PASSING ARRAY AS A PARAMETER

// #include<iostream>
// using namespace std;
// void fun(int (*arr)[]){
//     (*arr)[0]=1;
//     (*arr)[4]=1;
//     return;
// }
// int main(){
//     int arr[]={1,2,3,4,5};
//     fun(&arr);
//     for(int i=0;i<5;i++){
//         cout<<arr[i];
//     }
//     return 0;
// }

// #include<iostream>
// using namespace std;
// void find(string str,char ch,int *lp,int *rp){
//     for(int i=0;i<str.size();i++){
//         if(str[i]==ch){
//             *lp=i;
//             break;
//         }
//     }
//     for(int i=str.size()-1;i>0;i--){
//         if(str[i]==ch){
//             *rp=i;
//             break;
//         }
//     }
// }
// int main(){
//     string str="ALLSADHAKKAGJAL";
//     char ch='A';
//     int lpositon=-1;
//     int rposition=-1;
//     find(str,ch,&lpositon,&rposition);
//     cout<<lpositon<<endl;
//     cout<<rposition;

//     return 0;
// }

#include<iostream>
using namespace std;
int main(){
    return 0;
}