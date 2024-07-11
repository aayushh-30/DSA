#include<iostream>
#include<string>
using namespace std;
string maxi(string s){
    string ans="";
    int count=0;
    for(int i=0;i<s.length();i++){
        if(s[i]=='1'){
            count++;
        }
    }
    for(int i=0;i<count-1;i++){
        ans+='1';
    }
    for(int i=count-1;i<s.length()-1;i++){
        ans+='0';
    }
    ans.push_back('1');
    return ans;
}
int main(){
    string s;
    cin>>s;
    cout<<maxi(s);
    return 0;
}