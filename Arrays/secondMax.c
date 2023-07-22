#include<stdio.h>
#include<limits.h>
int main(){
    int arr[8]={8,7,6,4,5,3,2,1};
    int max = INT_MIN ;
    int smax=INT_MIN;
    for(int i=0 ; i<=7 ; i++){
        if(max<arr[i]){
            max= arr[i];
        }
    }
            for(int i=0 ; i<=7 ; i++){
                if(arr[i]!=max && smax<arr[i]){
                    smax=arr[i];
                }
            }
        
    
    printf("%d", smax);
    return 0 ;
}