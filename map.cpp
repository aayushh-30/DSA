#include<iostream>
#include<map>
#include<string>
using namespace std;
bool isomerphic(string s,string k){
    map<char,char> mp;
    for(int i=0;i<s.length();i++){
        char ch = s[i];
        if(mp.find(s[i])==mp.end()){
            mp[ch]=k[i];
        }
        else{
            map<char,char>::iterator it;
            it = mp.find(ch);
            if(it->second==k[i]){
                continue;

            }
            else{
                return false;
            }
        }
    }
    return true;
}
int main(){
    return 0;
}