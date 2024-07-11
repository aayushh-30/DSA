#include<iostream>
#include<algorithm>
#include<map>
using namespace std;
bool isIsomorphic(string a,string b){
    map<char,char> mp;
    for(int i=0;i<a.length();i++){
        if(mp.find(a[i])!=mp.end()){
            if(b[i]!=mp[a[i]]){
                return false;
            }
            
        }else{
            mp[a[i]] = b[i];
        }
    }
    return true;
}
int main(){
    return 0;
}