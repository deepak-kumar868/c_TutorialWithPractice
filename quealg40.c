#include <stdio.h>

int main()
{
    int arr[] = {10, 20, 30, 40, 50};
    int i, arr_size;
    arr_size = sizeof(arr) / sizeof(arr[0]);
    printf("old array:");
    for (i = 0; i < arr_size; i++)
    {
        printf("%d\t", arr[i]);
    }
    printf("\n");
    printf("new array:");
    printf("%d\t%d", arr[0], arr[arr_size - 1]);

    return 0;
}