#include <stdio.h>

int main()
{
    int arr[] = {10, 20, 30, 40};
    int i, n = sizeof(arr) / sizeof(arr[0]);

    printf("old array:\t");
    for (i = 0; i < n; i++)
    {
        printf("%d\t", arr[i]);
    }
    printf("\n");
    printf("new array:\t");
    for (i = 1; i < n; i++)
    {
        printf("%d\t", arr[i]);
    }
    printf("%d", arr[0]);

    return 0;
}