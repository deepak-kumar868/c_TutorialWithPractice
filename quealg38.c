#include <stdio.h>

int main()
{
    int arr[5] = {1, 2, 3, 4, 5}, i;
    printf("original array:");
    for (i = 0; i < 5; i++)
    {
        printf("%d\t", arr[i]);
    }
    printf("\n");
    printf("reversed array:");
    for (i = 4; i >= 0; i--)
    {
        printf("%d\t", arr[i]);
    }

    return 0;
}