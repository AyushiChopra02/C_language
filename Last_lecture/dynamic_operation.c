#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>
int main(){
    int* ptr=(int*)malloc(10*5);
    printf("%d" ,*ptr);
    ptr++;
        
}