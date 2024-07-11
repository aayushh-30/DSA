#include<iostream>
#include<string>
using namespace std;
int main(){
    string str="ayush";
    string str1("ayush");
    std::cout<<str<<" "<<str1;

    string str2;
    // cin>>str2;
    // cout<<str2;

    std::getline(std::cin,str2);
    std::cout<<str2;

    string str3;
    getline(cin,str3);
    cout<<str3;



    return 0;
}