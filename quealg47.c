#include <stdio.h>

int main()
{
    int i, j;
    int arr1[] = {10, 20, 30};
    int arr2[] = {40, 50, 60};
    printf("old array:");
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
    for (i = 0; i < 3; i++)
    {
        printf("%d\t", arr1[i]);
    }
    for (i = 0; i < 3; i++)
    {
        printf("%d\t", arr2[i]);
    }

    return 0;
}