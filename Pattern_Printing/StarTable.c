#include<stdio.h>
int main(){
    int n;
    printf("enter no. of line : ");
    scanf("%d", &n);
    int star=n;
    int space=1;
    for(int r=1; r<=2*n+1 ; r++){ //pahli line k lie
    printf("*");
}
printf("\n");
for(int r=1 ; r<=n ; r++){
    for(int c=1 ; c<=star ; c++){
        printf("*");
    }
    for(int k=1 ; k<=space ; k++){
        printf(" ");
    }
    printf("\n");
}
return 0 ;
}