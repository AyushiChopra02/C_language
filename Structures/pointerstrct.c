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
        pokemon pikachu= {22,34,55,"pikachu"};
        //baar baar alg value dene ki jgah ek hi m aise b likh skte h
       // pikachu.hp=60 ;
        //pikachu.speed = 99;
       // pikachu.attack= 88;
        //strcpy(pikachu.name , "pikachu");

        pokemon* x =  &pikachu;
     printf("%d\n" , pikachu.hp);
        printf("%d\n" ,pikachu.speed);
       printf("%d\n" ,pikachu.attack);
       printf("%s\n" , pikachu.name);
      
        return 0 ; 

    }