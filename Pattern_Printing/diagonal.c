#include <stdio.h>
int main(){
    int n;
    printf("enter row ");
    scanf("%d", &n);
    for (int i=1 ; i<=n ; i++){
    for( int j=1 ; j<=n ; j++){
    if(i==j)printf("*");
else printf(" ");
    }
    printf("\n");

}
return 0;
}