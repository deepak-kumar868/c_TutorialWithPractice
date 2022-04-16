#include <stdio.h>

int main()
{
    int max = 0, min = 0, i;
    int arr[5] = {1, 3, 5, 7, 9};
    for (i = 1; i < 5; i++)
    {
        max += arr[i];
    }
    for (i = 0; i < 4; i++)
    {
        min += arr[i];
    }
    printf("maximum sum of four number is:%d\n", max);
    printf("minimum sum of four number is:%d", min);

    return 0;
}