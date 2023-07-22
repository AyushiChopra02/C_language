#include<stdio.h>
int main(){
 int last;

 printf("enter last number : ")  ;
 scanf("%d" , &last) ;
    float a= 1234000;
 for(int i=1 ; i<=last ; i++){
    printf("%.2f " , a);
    
        a=a/2;
    }       
    return 0 ;
    }
    