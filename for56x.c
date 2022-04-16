#include <stdio.h>

int main()
{
    int n, i, j;
    printf("input a number:");
    scanf("%d", &n);
    for (i = 0; i <= n; i++)
    {
        for (j = i; j <= n - i; j++)
        {
            if (n % i != 0 && n % j != 0 && i + j == n)
            {
                printf("%d+%d=%d\n", i, j, n);
            }
        }
    }

    return 0;
}