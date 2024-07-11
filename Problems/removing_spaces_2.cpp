//remove all the spaces from the string and place @40 in that places
#include<iostream>
#include<string>
using namespace std;
string rem_space(string s){
    string k = "";
    for(int i=0;i<s.length();i++){
        if(s[i]==' '){
            k.push_back('@');
            k.push_back('4');
            k.push_back('0');


        }
        else{
            k.push_back(s[i]);
        }
    }
    return k;
}
int main(){
    string s;
    getline(cin,s);
    cout<<s<<endl;
    cout<<rem_space(s);
    
    return 0;
}