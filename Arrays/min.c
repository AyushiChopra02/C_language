#include<stdio.h>
#include<limits.h>
int main(){
    int arr[5]={2,5,23,3,15};
    int max= INT_MIN;
    for(int i=1 ; i<=4 ; i++){
        if (max < arr[i]){
            max= arr[i];
        }
    }
    printf("%d", max);
    return 0 ;
}