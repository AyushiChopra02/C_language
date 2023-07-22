#include<stdio.h>
int main(){
    int a;
    int* x= &a;
    int **y= &x;
    printf("%d\n" , a);
    printf("%d\n" , *x);
    printf("%d", **y);
    return 0 ;
}