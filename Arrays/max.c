#include<stdio.h>
int main(){
    int arr[7]={1,3,6,16,19,2,1};
    int max = arr[0];
for(int i =1; i<=6 ; i++){
    if(max<arr[i]){
        max=arr[i];
    }
}
printf("%d", max);
return 0 ; 
}