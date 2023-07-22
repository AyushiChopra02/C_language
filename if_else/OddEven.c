#include <stdio.h>
int main()
{
    int n;
    printf("Enter a number :");
    scanf("%d", &n);
    if (n % 2 == 0)
    { // even
        printf("even no:");
    }
    if (n % 2 != 0)
    { // odd
        printf("odd number:");
    }
    return 0;
}