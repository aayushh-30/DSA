#include<iostream>
#include<array>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    array<int,5> arry = {1,2,3,4,5};

    // cout<<arry.at(2)<<endl;
    // cout<<arry.empty()<<endl;
    // cout<<arry.front()<<endl;
    // cout<<arry.back();

    vector<int> v;
    vector<int> copy_v(v);//copy of vector v;
    vector<int> v2(5,1);// 5 is the size; all are initilised by 1
    cout<<v.capacity();
    v.push_back(1);
    cout<<endl;
    cout<<v.capacity();
    v.push_back(2);
    cout<<v.capacity()<<endl;
    v.push_back(3);
    cout<<v.capacity()<<endl;
    cout<<v.empty()<<endl;
    cout<<v.front()<<endl;
    v.pop_back();
    v.clear();
    //size 0 not capacity;
    binary_search(v.begin(),v.end(),3); //binary search

}