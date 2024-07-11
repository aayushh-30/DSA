#include<iostream>
#include<string>
using namespace std;


class Solution {
public:
    bool checkRecord(string s) {
        int cnt = 0;
        for(int i=0;i<s.length();i++){
            if(s[i]=='A'){
                cnt++;
            }

        }
        int f = s.find("LLL");
        if(cnt>=2 || f!=string::npos){
            return false;
        }
        return true;
        
    }
};

int main(){

    
    return 0;
}