#include<iostream>
using namespace std;
void TOH(int n,char A,char B,char C){
    if (n==1){
    cout<<A<<"-->"<<B<<endl;
    }
    else{
    TOH(n-1,A,C,B);
    cout<<A<<"-->"<<B<<"\n";
    TOH(n-1,C,B,A);
    }
}
int main(){
    int n;
    cout<<"ENTER THE NUMBER OF DISC : ";
    cin>>n;
    TOH(n,'A','B','C');

    return 0;
}




// #include <iostream>

// void TOH(int n, char source, char destination, char auxiliary) {
//     if (n == 1) {
//         std::cout << source << " --> " << destination << std::endl;
//     } else {
//         TOH(n - 1, source, auxiliary, destination);
//         std::cout << source << " --> " << destination << std::endl;
//         TOH(n - 1, auxiliary, destination, source);
//     }
// }

// int main() {
//     int n;
//     std::cout << "ENTER THE NUMBER OF DISCS: ";
//     std::cin >> n;
//     TOH(n, 'A', 'B', 'C');
//     return 0;
// }


