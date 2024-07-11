#include<iostream>
#include<stack>
using namespace std;
void middle(stack<int> &st){
    int count = 0;
    stack<int> copy = st;
    while(!copy.empty()){
        count++;
        copy.pop();
    }
    for(int i=0;i<count/2;i++){
        st.pop();
    }
    cout<<st.top();

}
int main(){
    stack<int> st;
    st.push(1);
    st.push(2);
    // st.push(3);
    st.push(4);
    st.push(5);
    middle(st);
    return 0;
}