#include<stdio.h>
int main(){
int n;
printf("enter number :")  ;
scanf("%d" , &n) ;
int sum=0;
int lastdigit=0;
while(n!=0){
 lastdigit=n%10;
if(n%2==0){
sum= sum+ lastdigit;
}
n=n/10;
}
printf("sum of even digit : %d " ,sum);
return 0 ;

}


