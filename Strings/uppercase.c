#include<stdio.h>
#include<ctype.h>
int main(){
    char ch ='a';
    printf("lowercase of %c is %c\n" , ch ,tolower(ch));
    printf("uppercase of %c is %c\n" , ch ,toupper(ch));

    printf("lowercase of %d is %d\n" , ch ,tolower(ch));
    printf("uppercase of %d is %d\n" , ch ,toupper(ch));
    return 0 ;
}