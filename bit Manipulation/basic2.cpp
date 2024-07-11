#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
#include <math.h>
using namespace std;
//swapping two number
void swap(int &a,int &b){
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;
}
int main(){
    int a = 5;
    int b = 6;
    swap(a,b);
    cout<<a<<b;

    return 0;
}