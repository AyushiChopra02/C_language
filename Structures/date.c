#include<stdio.h>
#include<string.h>
#include<stdbool.h>
int main(){
    typedef struct data{
        int day ;
        int month ;
        int year ;
    }date ;
    date a , b;
    a.day = 12 ;
    a.month = 3 ;
    a.year =1999 ;
     
     b.day = 22 ;
     b.month = 12;
     b.year = 2005 ;
     bool flag= true ;
     if(a.day != b.day)flag = false ;
     if( a.month != b.month )flag = false ;
     if(a.year != b.year)flag = false ;
     if(flag == true)printf("the dates are same ");
     else printf("the dates are different");
     return 0 ;

}