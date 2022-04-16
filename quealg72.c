#include <stdio.h>

int main()
{
    int k;
    int arr[10] = {1, 2, 0, 3, 5, 7, 0, 9, 11, 5};
    printf("old array is:\n");
    for (k = 0; k < 10; k++)
    {
        printf("%d\t", arr[k]);
    }
    printf("\n");

    int i,
        index = 0, cout = 0, j;
    printf("new array is:\n");
    for (i = 0; i < 10; i++)
    {
        if (arr[i] != 5)
        {
            printf("%d\t", arr[i]);
        }
        else
        {
            cout++;
        }
    }
    for (j = 0; j < cout; j++)
    {
        printf("0\t");
    }

    return 0;
}