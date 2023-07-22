#include<stdio.h>
int main(){
    int a,b ;
    printf("enter base ");
    scanf("%d", &a);
printf("enter power : ");
scanf("%d", &b);
int power=1;
for(int i=1 ; i<=b ; i++){
power=power * a ;
}
printf("Value of number : %d "  , power);
return 0 ;
}