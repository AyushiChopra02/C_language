#include <stdio.h>
int dupli(int arr[]);

int main()
{
    int arr[6] = {5, 1, 2, 5, 4, 4};
    int totalD = dupli(arr);
    printf("Total duplicates is = %d  ", totalD);
}

int dupli(int arr[])
{
    int count = 0;

    for (int i = 0; i <= 6; i++)
    {
        for (int j = i + 1; j <= 6; j++)
        {
            if (arr[i] == arr[j])
            {
                count++;
            }
        }
    }
    return count;
}

