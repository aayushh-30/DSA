#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int minimi(string s){
    string k = "AB";
    string k2 = "CD";
    while(s.length()>0){
        if(s.find(k)<s.length())
        s.erase(s.find(k),k.length());
        if(s.find(k2)<s.length())
        s.erase(s.find(k2),k2.length());
        if(s.find(k)==string::npos && s.find(k2)==string::npos)
        break;
    }
    return s.length();
}

int main(){
    string s;
    cin>>s;
    cout<<minimi(s);
    cout<<endl;
    
    return 0;
}