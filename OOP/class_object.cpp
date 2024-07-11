// #include<iostream>
// using namespace std;
// class Fruits{
//     public:
//     string name;
//     string color;
//     int number_of_boxes;
// };
// int main(){
//     Fruits f1;

//     cin>>f1.name;
//     f1.color="YELLOW";
//     f1.number_of_boxes=9;
//     cout<<f1.number_of_boxes<<endl<<f1.name;

//     Fruits *f2=new Fruits();
//     (*f2).name="GUAVA";
//     f2->color="GREEN";
//     f2->number_of_boxes=5;

//     cout<<f2->name<<endl<<f2->color<<endl<<f2->number_of_boxes<<endl;
//     return 0;
// }


#include<iostream>
using namespace std;
class Cars{
public:
    string name;
    string color;
    int number_of_gears;
    int avg(int dist,int petrol);
};

int Cars::avg(int dist,int petrol){
    return dist/petrol;
}
int main(){
    Cars Car1;
    cout<<Car1.avg(50,5);

    
    return 0;
}