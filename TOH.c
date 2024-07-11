#include<stdio.h>
// void TOH(int n,char A,char B,char C){
//     if(n==1){
//         printf("%c-->%c\n",A,B);
//     }
//     else{
//         TOH(n-1,A,C,B);
//         printf("%c-->%c\n",A,B);
//         TOH(n-1,C,B,A);
//     }
// }
int main(){
    int a=3,b=4,c=0,n;
    n=++a||--b&&++c;
    printf("%d %d %d %d",a,b,c,n);
    // printf("ENTER THE NUMBER OF DISC : ");
    // scanf("%d",&n);
    // TOH(n,'A','B','C');
    return 0;
}
