#include<stdio.h>
#include<string.h>
#include<stdbool.h>
    typedef union pokemon{
        int hp;
        int speed ;
        int attack ;
        char name[15];
    } pokemon ;
    int main(){
        pokemon pikachu ;
       pikachu.hp=60 ;
pikachu.speed = 99;
       pikachu.attack= 88;
        strcpy(pikachu.name , "pikachu");
     printf("%d\n" , pikachu.hp);
        printf("%d\n" ,pikachu.speed);
       printf("%d\n" ,pikachu.attack);
       printf("%s\n" , pikachu.name);
      
        return 0 ; 

    }