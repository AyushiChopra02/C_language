#include<stdio.h>
int main(){
int marks[10]={35, 90, 100 ,25, 15,10,88,75,29,11};
for(int i=0 ; i<10 ; i++){
    if(marks[i]<35){
    printf("%d " , i);
    }
}
return 0 ;
}
