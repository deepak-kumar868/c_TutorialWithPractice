#include <stdio.h>
int main()
{
    int i;
    int arr[3] = {1, 5, 7};
    printf("old array:");
    for (i = 0; i < 3; i++)
    {
        printf("%d\t", arr[i]);
    }
    printf("\n");
    printf("new array:");
    for (i = 0; i < 3; i++)
    {
        if (arr[i] == 5 && arr[i + 1] == 7)
        {
            arr[i + 1] = 1;
        }
        printf("%d\t", arr[i]);
    }

    return 0;
}
