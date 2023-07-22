#include<stdio.h>
#include<string.h>
int main(){
    typedef struct pokemon{
        int hp;
        int speed ;
        int attack ;
        char name[15];
    } pokemon ; 
    typedef struct legendarypokemon{
pokemon normal;
char ability[100];
    } legendarypokemon ;
    typedef struct godpokemon{
        legendarypokemon legend ;
        int specialattack ;
    }godpokemon;
    godpokemon squlter ;
squlter.specialattack = 900;
strcpy(squlter.legend.ability , " split water");
squlter.legend.normal.attack=88 ;
    }
    

    
    