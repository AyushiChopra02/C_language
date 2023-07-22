
#include<stdio.h>
int main(){
    int m;
    printf("enter rows of1st matrix");
    scanf("%d" , &m);
    int n;
    printf("enter columns of 1st matrix");
    scanf("%d" , &n);
    int arr[m][n];
    printf("enter all elements");
    
    //input
for(int i=0 ; i<n ; i++){
    for(int j=0 ; j<n ; j++){
        scanf("%d" , &arr[i][j]);
    }
}
//waveprint
for(int i=0 ; i<m ; i++){
    if(i%2==0){
    for(int j=0 ; j<n ; j++){

        printf("%d" , arr[i][j]);
    }    
}
else{
    for(int j=n-1 ; j>=0 ; j--){
    printf("%d" , arr[i][j]);   
}

    }
    printf("\n");
}
return 0 ;
}
