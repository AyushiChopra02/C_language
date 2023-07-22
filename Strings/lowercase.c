#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main(){
    char* str = "ayushi";
    for(int i = 0 ; i< strlen(str); i++){
        printf("%c" , toupper(str[i]));
    }
    return 0 ;
}