#include<stdio.h>
int max(int arr[],int n){
int max=0;
for(int i=0 ; i<n ; i++){
if(arr[i]>max){
    max=arr[i];
}
}
return max;
}
int main(){
    int arr[]={55,41,333,45,2};
    int m= max(arr,5);
    printf(" %d " , m );
}