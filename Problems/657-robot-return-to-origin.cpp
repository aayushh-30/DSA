#include<iostream>
#include<string>
#include<stack>
using namespace std;


class Solution {
public:
    bool judgeCircle(string s) {
        stack<int> up;
        stack<int> sd;
        int sum1=0,sum2=0;
        for(int i=0;i<s.length();i++){
            if(s[i]=='U') up.push(-1);
            else if(s[i]=='D') up.push(+1);
            else if(s[i]=='R') sd.push(+2);
            else sd.push(-2);
        }
        while(!up.empty()){
            sum1+=up.top();
            up.pop();

        }
        while(!sd.empty()){
            sum2+=sd.top();
            sd.pop();

        }
        if(sum1==0 && sum2==0) return true;
        return false;
        
    }
};
int main(){

    
    return 0;
}