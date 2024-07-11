#include<iostream>
#include<string>
using namespace std;
int fun(string s){
    int num=0;
    for(int i=0;i<s.length();i++){
        if(s[i]>='0' && s[i]<='9' ){
            int k = s[i]-'0';
            num = num*10+k;
        }
    }
    for(int i=0;i<s.length();i++){
        if(s[i]=='-')
        num = -num;
    }
    return num;

}
int main(){
    string t;
    getline(cin,t);
    cout<<fun(t);

}