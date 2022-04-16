#include <stdio.h>

int main()
{
    int arr[] = {1, 2, 5, 7, 9, 10, 12, 17};
    int arr_size = sizeof(arr) / sizeof(arr[0]), i, sum = 0;
    for (i = 0; i < arr_size; i++)
    {
        if (arr[i] != 17)
        {
            sum += arr[i];
        }
    }
    printf("sum of element of array except 17 is :%d", sum);

    return 0;
}