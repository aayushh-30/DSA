// #include<iostream>
// #include<string>
// using namespace std;
// int main(){
//     string s,a;
//     getline(cin,s);
//     for(int i=0;i<s.length();i++){
//         if(s[i]>='a' && s[i]<='z'){
//             a.push_back(s[i]);
//         }
//         else if(s[i]>='A' && s[i]<='Z'){
//             a.push_back(s[i]-'A'+'a');
//         }
//     }
//     cout<<a;
//     return 0;
// }

#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int main(){
    string s,l;
    getline(cin,s);
    string r(s.rbegin(),s.rend());
    cout<<endl;
    string k(s.begin(),s.end());
    cout<<r;
    cout<<endl;
    cout<<k;
    cout<<endl;
    cout<<(r==k);
    cout<<endl;
    cout<<r.compare(k);
    cout<<endl;
    cout<<equal(r.begin(),r.end(),k.begin());
}