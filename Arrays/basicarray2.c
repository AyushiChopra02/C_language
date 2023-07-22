#include<stdio.h>
int main(){
    int arr[5]={2, 4,6,8,3};
    for(int i=0; i<=4 ; i++){
    int a= i+1;
    printf("enter elemnt number %d " , i);
    scanf("%d", &arr[i]);
    
}
printf("%d" , arr[1]);
return 0 ;
}