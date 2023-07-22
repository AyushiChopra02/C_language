#include<stdio.h>
#include<string.h>
int main(){
    typedef struct pokemon{
        int hp;
        int speed ;
        int attack ;
        char name[15];
    } pokemon ;
    pokemon arr[2];
    arr[0].hp=50;
    arr[0].speed=60 ;
    arr[0].attack = 55 ;
    strcpy(arr[0].name , "pikachu");
 
    arr[1].hp=33 ;
    arr[1].speed= 44;
    arr[1].attack= 88;
    strcpy(arr[1].name , "raichu");
    for(int i= 0 ;i<3 ; i++){
        printf("%s\n" ,arr[i].name);
        printf("%d\n" , arr[i].attack);
        printf("%d\n" , arr[i].hp);
        printf("%d\n" , arr[i].speed);
    }
    return 0 ;
}