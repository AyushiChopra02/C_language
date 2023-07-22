#include<stdio.h>
int stair(int n){
if (n==1) return 1;
if(n==2) return 2;
int totalWays= stair(n-1) + stair(n-2); 
return totalWays;
}
int main(){
    int n;
    printf("n");
    scanf("%d" , &n);
    int ways= stair(n);
    printf("%d" , ways);
    return 0 ;

}