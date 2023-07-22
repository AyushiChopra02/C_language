#include<stdio.h>
int main(){
    int n;
    printf("enter size of array");  
    int arr[n];
    printf("enter elemnts");
    for(int i=0 ; i<n ; i++){
        scanf("%d" , &arr[i]);
    }

    for(int i=1; i<=n-1 ; i++){

       int  j= i-1;
while(j>=1 && arr[j]< arr[j-1]){
    int temp=arr[j];
    arr[j] =arr[j-1];
    arr[j-1] = temp ;
    j-- ;
    
}
for(int i=0 ; i<n ; i++){
    printf("%d" ,arr[i]);
}
    }
    return 0 ;
}