#include <stdio.h>

int main()
{
    int arr1[3] = {10, 20, 30};
    int arr2[3] = {10, 20, -30};
    int i, j, k, arr3[3];
    printf("original array:");
    for (i = 0; i < 3; i++)
    {
        printf("%d\t", arr1[i]);
        }
    printf("\n");
    for (j = 0; j < 3; j++)
    {
        printf("%d\t", arr2[j]);
    }
    printf("\n");
    printf("new array:");
    for (k = 0; k < 3; k++)
    {
        arr3[k] = arr1[k] + arr2[k];
        printf("%d\t", arr3[k]);
    }

    return 0;
}