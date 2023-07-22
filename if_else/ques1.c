#include<stdio.h>
int main(){
int n;   
printf("Enter a number :");
scanf("%d", &n);
if(n%5==0){ //even
printf("divisble by 5:");
}
else{
printf("not divisble by 5:");
}
return 0;   
}