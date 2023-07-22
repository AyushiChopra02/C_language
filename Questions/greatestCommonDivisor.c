#include<stdio.h>
int gcd(int a , int b){
    if(b==0){ return a ;}
    else{
        if(a<b){
            return gcd(b,a);
        }
        else{
            return(b , a%b);
        }
        }
    
}
int main(){
    int m, n, r;
    printf("enter no");
    scanf("%d %d", &m , &n );
    r=gcd(m,n);
    printf("%d" , r);
}