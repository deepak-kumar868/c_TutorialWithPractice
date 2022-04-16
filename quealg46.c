#include <stdio.h>

int main()
{
    int arr[] = {1, 5, 7, 9, 11, 13};
    int arr_size, i;
    arr_size = sizeof(arr) / sizeof(arr[0]);
    printf("old array:");
    for (i = 0; i < arr_size; i++)
    {
        printf("%d\t", arr[i]);
    }
    printf("\n");
    printf("new array:");
    printf("%d\t%d", arr[(arr_size / 2) - 1], arr[arr_size / 2]);

    return 0;
}