#include<stdio.h>
int main(){
int cp;
printf("enter cost price: ");
scanf("%d", &cp);
int sp;
printf("enter selling price:");
scanf("%d", &sp);
if(sp>cp){
printf("Profit"); 
}
if(sp<cp) {
printf("loss") ; 
} 
if(sp==cp){
printf("no profit no loss");
}
return 0 ;
}
