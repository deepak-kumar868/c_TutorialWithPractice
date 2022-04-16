#include <stdio.h>

int main()
{
    int n1, n2, i, j, ctr = 0;
    printf("input lower range:");
    scanf("%d", &n1);

    printf("input upper range:");
    scanf("%d", &n2);
    printf("prime number in this range:");
    for (i = n1; i <= n2; i++)
    {
        for (j = 2; j <= i / 2; j++)
        {
            if (i % j == 0)
            {
                ctr++;
            }
        }
        if (ctr == 0)
        {
            printf("%d\t", i);
        }
        else
        {
            ctr = 0;
        }
    }

    return 0;
}