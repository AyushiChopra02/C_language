#include<stdio.h>
#include<string.h>
int main(){
char s1[] ="Physics";
char* s2 = s1 ; //s2 is shallow copy
s1[0]='m';
printf("%s" , s2);
}