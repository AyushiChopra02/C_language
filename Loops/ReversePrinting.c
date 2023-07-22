#include<stdio.h>
int main(){
int n;
printf("enter number : ") ; 
scanf("%d", &n) ;
int r=0;
while(n>0){
   int lastdigit= n%10;
   r=r*10;
   r=r+ lastdigit ;
   n/=10;

}

printf("reverse number: %d" , r);
return 0 ;
}



