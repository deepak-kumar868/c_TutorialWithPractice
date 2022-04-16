#include <stdio.h>
int main()
{
    int i, array[4] = {10, 20, 30, 40};
    printf("old array:");
    for (i = 0; i < 4; i++)
    {
        printf("%d:\t", array[i]);
    }
    printf("\n");
    printf("new array:");
    for (i = 1; i < 4; i++)
    {
        printf("%d:\t", array[i]);
    }
    printf("%d", array[0]);

    return 0;
}
