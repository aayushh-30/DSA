#include<iostream>
#include<set>
#include<vector>
using namespace std;
int main(){
    //initilisation
    set<int> set1;

    cout<<set1.empty();
    cout<<endl;

    vector<int> arr={1,2,3,4,5,6,7,8,9,10,11,12};

   

    //insertion
    set1.insert(arr.begin(),arr.end());

     cout<<set1.empty();
    
    cout<<endl;

    //traversal
    //reverse iterator
    set<int>::reverse_iterator itr;
    for(itr=set1.rbegin();itr!=set1.rend();itr++){
        cout<<*itr<<"  ";
    }
    cout<<endl;

    //reverse iterator
    set<int>::iterator itr1;
    for(itr1=set1.begin();itr1!=set1.end();itr1++){
        cout<<*itr<<"  ";
    }
    cout<<endl;

    //deletion
    // set1.erase(10);

    //deleting a range by using iterator
    // auto strt_itr = set1.begin();
    // advance(strt_itr,2);
    // auto end = set1.begin();
    // advance(end,6);
    // set1.erase(strt_itr,end);

    // for(itr=set1.begin();itr!=set1.end();itr++){
    //     cout<<*itr<<"  ";
    // }

    //finding an element;
    // if(set1.find(22)==set1.end()){
    //     cout<<"not present";
    // }
    // else{
    //     cout<<"present";
    // }

    return 0;
}