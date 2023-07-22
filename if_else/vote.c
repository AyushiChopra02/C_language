#include<stdio.h>
int main(){
int age;
printf("enter any age: ");
scanf("%d",&age);
if(age>18){
printf("You can vote");
}
else{
printf("you cannot vote");
}
return 0;
}