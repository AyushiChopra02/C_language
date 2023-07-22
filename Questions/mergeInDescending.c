#include<stdio.h>
int main(){
    
    int arr[6]={4,9,7, 10 , 2,3};
    for(int i=0 ; i<6 ; i++){
for(int j=i+1 ; j<6 ; j++){
    if(arr[i]<arr[j]){
        int temp = arr[i];
        arr[i]=arr[j];
        arr[j]= temp;
    }
    }
}
for(int i=0 ; i<6 ; i++){
    printf("%d " , arr[i]);
    }
}
  

    
