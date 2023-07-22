#include<stdio.h>
#include<stdbool.h>
int main(){
    int arr[7]={12, 34,45,22,12,7 , 78};
    int x=22;
    int index=0;
    bool flag= false; //false means not present
    for(int i=0; i<=6; i++){
        if(arr[i]==x){
            flag= true; //true means present
            index=i;
            break;
        }
    }
    if(flag==false){
        printf("%d is not present in array" , x);
    }
    else{
        printf("%d is present in array and its index is %d" , x, index);
    }
    return 0 ; 
}