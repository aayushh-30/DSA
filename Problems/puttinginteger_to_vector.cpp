// //putting an number to a array
// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;


// class Solution {
// public:
//     vector<int> plusOne(vector<int>& digits) {
//         long long int nums=0;
//         for(int i=0;i<digits.size();i++){
//             nums=nums*10+digits[i];
//         }
//         // int num = 230;
//         nums=nums+1;
//         vector<int> v;
//         while(nums>0){
//             v.push_back(nums%10);
//             nums=nums/10;

//         }
//         reverse(v.begin(),v.end());
//         return v;
//     }
// };




// int main(){
//     int num = 230;
//     vector<int> v;
//     while(num>0){
//         v.push_back(num%10);
//         num=num/10;

//     }
//     reverse(v.begin(),v.end());
//     for(int i=0;i<v.size();i++){
//         cout<<v[i];
//     }



//     return 0;
// }



#include<iostream>
#include<vector>
using namespace std;
vector<int> fun(vector<int> &v){
    int k=v.size()-1;
    while(k>=0 && v[k]==9){
        v[k]=0;
        k--;
    }
    v[k]=v[k]+1;
    if(v[k]==9 && k==0){
        return {1,v};
    }
    return v;
}
int main(){
    vector<int> v = {9,9,9};
    k=fun(v);
    for(int i=0;i<v.size();i++){
        cout<<v[i];
    }


    return 0;
}