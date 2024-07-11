#include<iostream>
#include<stack>
using namespace std;
void insert_at_end(stack<int> &k,int x){
    if(k.empty()){
        k.push(x);
    }
    else{
        int j = k.top();
        k.pop();
        insert_at_end(k,x);
        k.push(j);

    }
}
void reversal(stack<int> &s){
    if(!s.empty()){
        int k = s.top();
        s.pop();
        reversal(s);
        insert_at_end(s,k);
    }
}
int main(){
    stack<int> st;
    st.push(1);
    st.push(2);st.push(3);st.push(4);st.push(5);
    // while(!st.empty()){
    //     cout<<st.top()<<" ";
    //     st.pop();
    // }
    // cout<<endl;
    reversal(st);
    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }
    cout<<endl;
    return 0;
}