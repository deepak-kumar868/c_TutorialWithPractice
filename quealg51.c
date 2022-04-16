#include <stdio.h>

int main()
{
    int arr[] = {1, 2, 5, 7, 9, 10, 12};
    int arr_size = sizeof(arr) / sizeof(arr[0]), i, cout = 0;
    for (i = 0; i < arr_size; i++)
    {
        if (arr[i] % 2 == 0)
        {
            cout++;
        }
    }
    printf("no. of even element i an array is :%d", cout);

    return 0;
}