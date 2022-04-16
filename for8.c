#include <stdio.h>

int main()
{
    int i, n;
    printf("input the no. of terms");
    scanf("%d", &n);
    printf("odd natural number is:");
    for (i = 1; i <= 2 * n; i++)
    {
        if (i % 2 != 0)
        {
            printf("%d\t", i);
        }
    }

    return 0;
}