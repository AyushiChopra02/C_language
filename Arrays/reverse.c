#include<stdio.h>
int main(){
    int n=0;
    printf("enter number");
    int arr[5]={1,2,3,4,5};

int brr[5];
    for(int i=0 ; i<=4 ; i++){
        brr[i]=arr[4-i];
        printf("%d" , brr[i]);
    }
    
    return 0 ;
}