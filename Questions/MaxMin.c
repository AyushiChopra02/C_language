#include<stdio.h>
int main(){

    int arr[10]={9,88,27,3,11,1,35,54,-444,6};
    int max=arr[0];
    int min=arr[0];
    for(int i=1 ; i<=9 ; i++){
        if(arr[i]>max){
            max=arr[i];
        }
        if(arr[i]<min){
            min=arr[i];
        }
    }
    printf("this is max: %d" , max);
    printf("\n");
    printf("This is min: %d" , min);
}