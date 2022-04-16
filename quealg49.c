#include <stdio.h>

int main()
{
    int arr[] = {1, 5, 7, 9, 11, 13};
    int arr_size = sizeof(arr) / sizeof(arr[0]), i;
    printf("old array:");
    for (i = 0; i < arr_size; i++)
    {
        printf("%d\t", arr[i]);
    }
    printf("\n");
    printf("new array:");
    for (i = (arr_size / 2) - 1; i <= (arr_size / 2) + 1; i++)
    {
        printf("%d\t", arr[i]);
    }

    return 0;
}