#include<iostream>
#include<string>
#include<stack>
using namespace std;
     bool detectCapitalUse(string word) {
        string cap = "";
        string smal = "";
        string small = "";
        for(int i=0;i<word.length();i++){
            char ch = word[i];
            if(ch>='A' && ch<='Z'){
                cap.push_back(ch);
            }
            else if(ch>='a' && ch<='z'){
                smal.push_back(ch);
            }
        }
        if(word[0]>='A' && word[0]<='Z'){
            for(int i=1;i<word.length();i++){
                if(word[i]>='a' && word[i]<='z')
                small.push_back(word[i]);
            }
            if(small.length()==word.length()-1){
                return true;
            }
        }

        if(word.length()==cap.length()||word.length()==smal.length()){
            return true;
        }
        else{
            return false;
        }    
}
int main(){

    string s;
    cin>>s;

    



    return 0;
}