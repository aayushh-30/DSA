#include<iostream>
using namespace std;
class man{
    public:
    int a;int b;
    void ar(){
        cout<<"HELLO";
    }
    void add(int k,int j,int c = 0){
        cout<<k+j+c;
    }
    void operator+(man &obj){
    int val1 = this->a;
    int val2 = obj.b;
    cout<< val1-val2;
}
    
};

int main(){
    man gh;
    gh.a = 4;
    gh.b = 9;
    gh.operator+(gh);


    


    return 0;
}