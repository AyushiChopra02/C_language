#include<stdio.h>
void swap(int* x , int* y ){
int temp;
temp=*x; //temp=2
*x=*y; //a=9
*y= temp; //*y=2 means b=2
return  ;

}
int main(){
    int a;
    printf("enter a");
    scanf("%d", &a);
    int b;
    printf("enter b");
    scanf("%d", &b);
    swap(&a , &b);
    printf("the value of a: %d\n", a);
    printf("the value of b is %d" , b);
    return 0 ;
}