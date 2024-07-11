#include<iostream>
#include<string>
using namespace std;
string ransome(string ransome,string magazin){
    int k = magazin.find(ransome);
    if(k<magazin.length() && k>=0){
        return "true";
    }
    return "false";
    
}
int main(){
    string s,j;
    cin>>s;
    cin>>j;
    cout<<ransome(s,j);
    return 0;
}