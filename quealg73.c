#include <stdio.h>

int main()
{
    int arr[9] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int i, temp = 0, index = 0;
    for (i = 0; i < 9; i++)
    {
        if (arr[i] % 2 == 0)
        {
            temp = arr[index];
            arr[index] = arr[i];
            arr[i] = temp;
            index++;
        }
    }

    for (i = 0; i < 9; i++)
    {
        printf("%d\n", arr[i]);
    }

    return 0;
}