#include<stdio.h>
int main(){
    int arr[3][4]={{1,0,1,1} , {0,1,0,1} , {1,1,1,1}};
    int max=0; 
    int maxindex=0;
    int maxcount = 0;
    for(int i=0 ; i<3 ; i++){
        int count=0;
        for(int j=0 ; j<4 ; j++){
            if(arr[i][j]==1) count ++ ;
        }
        if(maxcount<count){
            maxcount=count;
            maxindex=i;

        }
        printf("\n");
    }
    printf("%d" , maxindex);
    return 0 ;
}