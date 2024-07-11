#include<iostream>
#include<string>
using namespace std;
string butify(string s){
    s+=' ';
    string k="";
    string ans = "";

    for(int i=0;i<s.length();i++){
        if(s[i]!=' '){
            k.push_back(s[i]);
        }
        else if(s[i]==' '){
            if(k.length()>2){
                ans+=toupper(k[0]);
                for(int  i=1;i<k.length();i++){
                    ans+=tolower(k[i]);
                }
                ans+=' ';

            }
            else{
                for(int i=0;i<k.length();i++){
                    ans+=tolower(k[i]);

                }
                ans+=' ';
            }

            k="";

        }

    }
    return ans;
}
int main(){
    string j;
    getline(cin,j);
    cout<<butify(j);
    return 0;
}