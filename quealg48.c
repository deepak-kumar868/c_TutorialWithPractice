#include <stdio.h>

int main()
{
    int arr[] = {1, 5, 7, 9, 11, 13};
    int i, temp;
    int arr_size = sizeof(arr) / sizeof(arr[0]);
    printf("old array:");
    for (i = 0; i < arr_size; i++)
    {
        printf("%d\t", arr[i]);
    }
    printf("\n");
    printf("new array:");
    temp = arr[0];
    arr[0] = arr[arr_size - 1];
    arr[arr_size - 1] = temp;

    for (i = 0; i < arr_size; i++)
    {
        printf("%d\t", arr[i]);
    }

    return 0;
}