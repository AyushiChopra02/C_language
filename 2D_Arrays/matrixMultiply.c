#include<stdio.h>
int main(){
    //1st matrix order
    int m;
    printf("enter rows of 1st matrix ");
    scanf("%d", &m);
    int n;
    printf("enter columns of 1st");
    scanf("%d" , &n);
    //input 1st matrix
    printf("enter elmnts of 1st matrix");
    int arr[m][n];
    for(int i=0; i<m ; i++){
        for(int j=0 ; j<n ; j++){
            scanf("%d", &arr[i][j]);
        }
    }
    //2ndmatrix
    int p;
    printf("enter rows of 2nd  ");
    scanf("%d" , &p);
    int q;
    printf("enter columns ");
    scanf("%d" , &q);
    int b[p][q];

    
printf("enter elmnts of 2nd matrix");

    for(int i=0; i<p ; i++){
        for(int j=0 ; j<q ; j++){
            scanf("%d", &b[i][j]);
        }
    }
    if(n!=p){
        printf("the matrix cannot multiply");
    }
    return 0 ;
}
