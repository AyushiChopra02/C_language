#include<stdio.h>
int main(){
    int x;
    //wheather it is oddd or even
    //even -> 1
    //odd -> 0
    printf("enter number");
    scanf("%d" , &x);
    printf("%d" , x%2 == 0);
    return 0 ;
}
