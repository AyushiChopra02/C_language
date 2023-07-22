#include<stdio.h>
int main(){
int first,last,Cd;
printf("Enter first number : ");
scanf("%d" ,&first);
printf("Enter last number : ");
scanf("%d" ,&last);
printf("Enter Cd : ");
scanf("%d" ,&Cd);

 for(int i=first ; i<=last ; i++){
    printf("%d ", first);
    first=first+Cd;

 }
 return 0 ;
}