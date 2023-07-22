#include<stdio.h>
int factorial(int x){
    int factorial=1;
    for(int i=1 ; i<=x ; i++){
    factorial=factorial*i;
    }
    return factorial;
}
int main(){
    int n; 
    printf("enter n : ");
    scanf("%d", &n);
    int r;
    printf("enter r");
    scanf("%d" ,&r);
    int nfactorial=factorial(n);
    int rfactorial=factorial(r);
    int nfactorialr=factorial(n-r);

int ncr=nfactorial/(rfactorial*nfactorial);
printf("%d", ncr);
return 0 ;
}