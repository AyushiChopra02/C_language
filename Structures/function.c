#include<stdio.h>
#include<string.h>
int main(){
    typedef struct pokemon{
        int hp;
        int speed;
        char name[15];
    } pokemon ;
    pokemon a, b ;
    a.hp=100;
    a.speed=99 ;
    strcpy(a.name, "blastoise");
    b=a ; //b mai bhi a aa gya
    b.speed =55 ;
    printf("%d\n" , b.speed);
    printf("%d" ,b.hp);

    
    return 0 ;
}

    
