#include<stdio.h>
int main()
{
int a;
printf("enter 1st number :");
scanf("%d", &a);
int b;
printf("enter 2nd number: ");
scanf("%d", &b);
int c;
printf("enter 3rd no.");
scanf("%d", &c);
if(a+b>c && b+c>a && c+a>b){
printf("tringle is valid ");
}
else{
    printf("invalid");
}
return 0;


}