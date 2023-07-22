#include <stdio.h>
void increasing(int n)
{
    if (n == 0)
    {
        return;
    }
    
    printf("%d\n", n);
    increasing(n - 1);
}

int main()
{
    int n;
    printf("enter a number");
    scanf("%d", &n);
    increasing(n);
    return 0;
}