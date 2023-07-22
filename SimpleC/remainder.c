#include<stdio.h>
int main(){ 
int a, b ;

printf("enter Divedend: ");
scanf("%d",&a);

printf("enter divisor :");
scanf("%d",&b);

int q= a/b;
int r= a-b*q;

int rem= a%b;

printf("the remainder when %d is divided  by %d is: %d",a,b, r);

return 0 ;

}