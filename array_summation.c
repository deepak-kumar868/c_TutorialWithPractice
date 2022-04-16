#include <stdio.h>

int main()
{
    int arr[6] = {1, 2, 3, 4, 5, 6}, sum = 0, i;
    for (i = 0; i < 6; i++)
    {
        sum += arr[i];
    }
    printf("the sum of array of element is:%d", sum);
    return 0;
}