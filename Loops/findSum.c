#include<stdio.h>
int main(){
 int n;
 printf("enter a number : ");
 scanf("%d", &n);
int sum=0;

 int lastDigit=0;
 while(n!=0){
 lastDigit = n%10;
 sum= sum+ lastDigit;
n=n/10;
 }
printf("the sum of digit: %d",  sum);


return 0 ;
}