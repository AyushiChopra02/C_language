#include<stdio.h>
#include<string.h>
int main(){
    struct book{
        char name[50];
        int noOfpage ;
        float price ;
    } a ,b , c ;
a.noOfpage = 100 ;
a.price= 45.22 ;
strcpy(a.name , "secret seven");
printf("%f\n" ,a.price);
printf("%d" , a.noOfpage);
}
