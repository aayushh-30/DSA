// #include<iostream>
// using namespace std;
// string subset(string str,string ans,int n){
//     if(n==str.length()){
        
//         return ans;
//     }
    
//     subset(str,ans,n-1)+str[n];
//     subset(str,ans,n-1);

// }
// int main(){
//     string str = "abc";


//     return 0;
// }

#include<iostream>
#include<vector>
#include<string>
using namespace std;
vector<string> k;
void fun(string s,int i,string ans,int n){
    if(i==n){
        k.push_back(ans);
        k.push_back(",");
        return;
    }
    fun(s,i+1,ans+s[i],n);
    fun(s,i+1,ans,n);
}
int main(){
    string st = "abc";
    int n = 3;
    string ans="";
    fun(st,0,ans,3);

    for(string ki : k){
        cout<<ki;
    }


    return 0;
}