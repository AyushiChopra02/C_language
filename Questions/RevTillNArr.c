#include <stdio.h>
int main()
{
    int arr[6] = {8, 5, 88, 21, 4, 3};
    int revNo;
    scanf("%d", &revNo);

    for (int i = 0; i < 6; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    for (int i = revNo - 1; i >= 0; i--)
    {
        printf("%d", arr[i]);
    }
}