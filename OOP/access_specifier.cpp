#include<iostream>
using namespace std;
class Person{
    private:
    string name;
    int age;
    string gender;

    public:
    void set(string n,int a,string g){
        name = n;
        age = a;
        gender = g;
    }
    void get(){
        cout<<"age of"<<this->name<<"is"<<age<<endl;
        
    }
};
int main(){
    Person P1,P2;
    P1.set("ayush",20,"male");
    P1.get();
    P2.set("kanha",19,"male");
    P2.get();
    return 0;
}