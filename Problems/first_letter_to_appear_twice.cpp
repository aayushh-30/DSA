#include<iostream>
#include<string>
#include<algorithm>
#include<map>
using namespace std;
char repeat(string s){
    sort(s.begin(),s.end());
    for(int i=0;i<s.length()-1;i++){
        if(s[i]==s[i+1]){
            return s[i];
        }
    }
}
char repeatChar(string s){
    map<char,int> freq;
    for(int i=0;i<s.length();i++){
        if(freq.find(s[i])!=freq.end()){
            freq[s[i]]++;
            if(freq[s[i]]==2){
                return s[i];
            }
        }
        else{
            freq[s[i]]=1;
        }
    }
}
int main(){
    string s;
    cin>>s;
    cout<<repeatChar(s);
    cout<<endl;
    cout<<repeat(s);
    return 0;
}