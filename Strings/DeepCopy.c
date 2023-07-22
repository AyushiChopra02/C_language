#include<stdio.h>
#include<string.h>
int main(){
    char s1[] = "physics";
    char s2[]= "physics";
    s2[0]='m';
    printf("%s\n" , s1);
    printf("%s" , s2);
}