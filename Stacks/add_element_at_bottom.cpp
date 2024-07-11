#include<iostream>
#include<stack>
using namespace std;
void fun(stack<int> &s1,int x){
    stack<int> rev;
    while(!s1.empty()){
        rev.push(s1.top());
        s1.pop();
    }
    rev.push(x);
    while(!rev.empty()){
        s1.push(rev.top());
        rev.pop();
    }

}

//using recursion

void fun1(stack<int> &s1,int x){
    if(s1.empty()){
        s1.push(x);
    }
    else{
        int temp = s1.top();
        s1.pop();
        fun1(s1,x);
        s1.push(temp);
    }
}
int main(){
    stack<int> s1;
    s1.push(7);
    s1.push(1);
    s1.push(4);
    s1.push(5);
    fun(s1,9);
    
    return 0;
}