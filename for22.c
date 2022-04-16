#include <stdio.h>

int main()
{
    int n, p, q, i, j;
    printf("enter the no. of row:");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            p = 1, q = 0;
        }
        else
        {
            p = 0, q = 1;
        }

        for (j = 1; j <= i; j++)
        {
            if (j % 2 == 0)
            {
                printf("%d", p);
            }
            else
            {
                printf("%d", q);
            }
        }
        printf("\n");
    }

    return 0;
}