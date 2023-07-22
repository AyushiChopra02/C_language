#include <stdio.h>
int main()
{
    int arr[4] = {3, 2, 2, 5};
    int count = 0;
    int n;
    for (int i = 0; i < n; i++)
    {
        count = 0;
        for (int j = 0; j < n; j++)
        {
            if (i != j)
            {
                if (arr[i] == arr[j])
                {
                    count++;
                }
            }
        }
        if (count == 0)
        {
            printf("%d", arr[i]);
        }
    }
}