#include<stdio.h>
#include<string.h>
#include<stdbool.h>
    typedef struct pokemon{
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
        pokemon* x =  &pikachu;
     printf("%d\n" , pikachu.hp);
       // printf("%p\n" ,&pikachu.speed);
       // printf("%p\n" ,&pikachu.attack);
       // printf("%p" , x);
       (*x).hp = 45; // x->hp  aise bhi likh skte h
       printf("%d" , pikachu.hp);
        return 0 ; 

    }