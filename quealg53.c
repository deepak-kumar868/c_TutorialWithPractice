#include <stdio.h>

int main()
{
    int i;
    int arr[] = {1, 5, 6, 9, 10, 17}, sum = 0;
    int arr_size = sizeof(arr) / sizeof(arr[0]);
    for (i = 0; i < arr_size; i++)
    {
        if (arr[i] == 5 && arr[i + 1] == 6)
        {
            arr[i] = 0;
            arr[i + 1] = 0;
        }
        else
        {
            sum += arr[i];
        }
    }
    printf("sum of element of given array is:%d", sum);

    return 0;
}