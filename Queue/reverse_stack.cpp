#include<iostream>
#include<stack>
#include<queue>
using namespace std;

void reversal(queue<int> &k){
    if(k.empty()){
        return;
    }
   
    int j = k.front();
    k.pop();
    reversal(k);
    k.push(j);
    
}
int main(){

    queue<int> q;
    q.push(12);
    q.push(10);
    q.push(5);
    q.push(78);

    stack<int> st;
    while(!q.empty()){
        int k = q.front();
        q.pop();
        st.push(k);

    }

    while(!st.empty()){
        int j = st.top();
        st.pop();
        q.push(j);

    }

    cout<<q.front();


    
    

    return 0;
}