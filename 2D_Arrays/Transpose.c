
#include<stdio.h>
int main(){
    int r;
    printf("enter row ");
    scanf("%d" , &r);
    int c;
    printf("enter column");
    scanf("%d" , &c);
    printf("enter all elements");
    int arr[r][c];
for(int i=0 ; i<r ; i++){
    for(int j=0 ; j<c ; j++){
        scanf("%d" , &arr[i][j]);
    }
    }
    printf("\n");
    for(int i=0 ; i<c ; i++){
        for(int j=0 ; j<r; j++){
                printf("%d " , arr[j][i]);
        }
        printf("\n");
    }
        return 0 ;
    }