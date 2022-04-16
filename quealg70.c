#include <stdio.h>

int main()
{
    int arr[] = {1, 2, 3, 5, 7, 9, 11}, cout = 0, i;
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("old array is:\t");
    for (i = 0; i < n; i++)
    {
        printf("%d\t", arr[i]);
    }

    printf("\n");
    int j = 0;
    printf("new array is:\t");
    while (arr[j] != 5)
    {
        cout++;
        j++;
    }
    for (i = cout + 1; i < n; i++)
    {
        printf("%d\t", arr[i]);
    }

    return 0;
}