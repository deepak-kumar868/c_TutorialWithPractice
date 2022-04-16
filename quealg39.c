#include <stdio.h>

int main()
{
    int arr1_size, arr2_size, i, j;
    int arr1[5] = {10, 20, -30, -40, 30};
    int arr2[5] = {10, 20, 30, 40, 30};
    arr1_size = sizeof(arr1) / sizeof(arr1[0]);
    arr2_size = sizeof(arr2) / sizeof(arr2[0]);
    printf("old array:");
    for (i = 0; i < 5; i++)
    {
        printf("%d\t", arr1[i]);
    }
    printf("\n");
    for (j = 0; j < 5; j++)
    {
        printf("%d\t", arr2[i]);
    }
    printf("\n");
    printf("new array is :%d \t %d", arr1[arr1_size / 2], arr2[arr2_size / 2]);

    return 0;
}