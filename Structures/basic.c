#include<stdio.h>
int main(){
    struct pokemon{
        int hp ;
        int speed ;
        int tier ;
    } ;
    struct pokemon  pikachu ;

    pikachu . speed =60;
    pikachu . tier = 'b' ;
    printf("%d" , pikachu . speed);
    
    
    
    }
