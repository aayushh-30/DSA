#include<iostream>
#include<stack>
#include<vector>
using namespace std;
void deletemiddle(stack<int> &s,int count,int size){
    if(count==size/2){
        s.pop();
        return;
    }
    int k = s.top();
    s.pop();

    deletemiddle(s,count+1,s.size());

    s.push(k);
}
int main(){
    stack<int> st;
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(7);
    st.push(9);
    st.push(8);
    st.push(1);
    deletemiddle(st,0,st.size());
    
    return 0;
}
