#include<stdio.h>
int main(){
    char str[]="hello world";
    int i=0; 
while(str[i]!='\0'){
    printf("%c", str[i]);
    i++ ;
}
return 0 ;
}