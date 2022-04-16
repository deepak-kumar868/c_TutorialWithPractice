#include <stdio.h>

int main()
{
    int arr[] = {1, 2, 3, 5, 7}, i;
    int arr_size = sizeof(arr) / sizeof(arr[0]);
    printf("old array :\t");
    for (i = 0; i < arr_size; i++)
    {
        printf("%d\t", arr[i]);
    }
    printf("\n");

    printf("new array :\t");
    for (i = 0; i < arr_size; i++)
    {
        if (arr[i] == 5)
        {
            break;
        }
        else
        {
            printf("%d\t", arr[i]);
        }
    }

    return 0;
}