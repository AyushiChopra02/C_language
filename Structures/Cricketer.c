#include<stdio.h>
#include<string.h>
int main(){
    typedef struct Cricketer{
        char firstname[15];
        char secondname[15];
        int age;
        int noOfMatch ;
        float average ;
    } Cricketer;
    Cricketer arr[3];
    for(int i=0 ; i<3 ; i++){
        scanf("%s" ,arr[i].firstname);
scanf("%s" ,arr[i].secondname);
        scanf("%d"  , &arr[i].age);
        scanf("%d " , &arr[i].noOfMatch);
        scanf("%f" , &arr[i].average);
    }
    for(int i=0 ; i<3 ; i++){
        printf("%s\n" ,arr[i].firstname);
        printf("%s\n" ,arr[i].secondname);
        printf("%d\n"  , arr[i].age);
        printf("%d\n " , arr[i].noOfMatch);
        printf("%f\n" , arr[i].average);
    }
    return 0 ;
    }
    
