#include<iostream>
using namespace std;
class Employee{
    private:
        int salary;
    public:
    void set_salary(int x){
        salary=x;
    }
    int get_salary(){
        return salary;
    }

};
int main(){
    Employee E1;
    E1.set_salary(100000);
    cout<<E1.get_salary();


    return 0;
}