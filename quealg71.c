#include <stdio.h>

int main()
{
    int i;
    int arr[] = {1, 2, 0, 3, 5, 7, 0, 9, 11};
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("old array is:\t");
    for (i = 0; i < n; i++)
    {
        printf("%d\t", arr[i]);
    }
    printf("\n");

    printf("new array is:\t");
    for (i = 0; i < n; i++)
    {
        if (arr[i] == 0)
        {
            printf("%d\t", arr[i]);
        }
    }
    for (i = 0; i < n; i++)
    {
        if (arr[i] != 0)
            printf("%d\t", arr[i]);
    }

    return 0;
}