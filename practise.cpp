// #include<iostream>
// #include<vector>
// using namespace std;
// void BubbleSort(vector<int> &v){
//     int n=v.size();
//     for(int i=0;i<n-1;i++){
//         for(int j=0;j<n-i-1;j++){
//             if(v[j]>v[j+1]){
//                 swap(v[j],v[j+1]);
//             }
//         }
//     }
// }
// int main(){
//     int size,target;
//     cout<<"ENTER SIZE OF ARRAY : ";
//     cin>>size;
//     cout<<"TARGET : ";
//     cin>>target;
//     vector<int> v(size);
//     for(int i=0;i<size;i++){
//        cin>>v[i];
        
//     }
//     for(int i=0;i<v.size();i++){
//         for(int j=i+1;j<v.size();j++){
//             if(v[i]+v[j]==target){
//                 cout<<i<<" "<<j;
//                 break;
//             }
//             break;
//         }
//         break;
//     }
    // for(int i=0;i<size;i++){
    //     int k=0,l=size-1;
    //     if(v[k]+v[l]==target){
    //         cout<<k<<" "<<l;
    //     }

    // }
    // BubbleSort(v);


    // for(int i=0;i<size;i++){
    //    cout<<v[i]<<" ";
        
    // }
    // int i=0,j=v.size()-1;

    // while(i<j){
    //     if(v[i]+v[j]==target){
    //         cout<<endl<<i<<" "<<j<<endl;
    //         break;
    //     }
    //     else if(v[i]+v[j]>target){
    //         j--;
    //     }
    //     else{
    //         i++;
    //     }
    // }
//     return 0;
// }

#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    // for(int i=0;i<n;i++){                     //SQUARE 
    //     for(int j=0;j<n;j++){
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }

    // for(int i=0;i<n;i++){                     //HOLLOW SQUARE 
    //     for(int j=0;j<n;j++){
    //         if(i==0||j==0||i==n-1||j==n-1)
    //         cout<<"*";
    //         else cout<<" ";
    //     }
    //     cout<<endl;
    // }

    // for(int i=0;i<n;i++){                     //LEFT TRIANGLE 
    //     for(int j=0;j<=i;j++){
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }

    for(int i=n;i>=0;i-- ){                     //RIGHT TRIANGLE 
        for(int j=0;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}