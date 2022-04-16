#include <stdio.h>

int main()
{
    int i, j, bud, n, n1, price = 0, p, q;
    printf("input your budget:");
    scanf("%d", &bud);
    printf("How many no. of keyboard available in shop:");
    scanf("%d", &n);
    printf("How many no. of USB drive available in shop:");
    scanf("%d", &n1);
    int k[n], d[n1];
    printf("input the price of different keyboard:");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &k[i]);
    }
    printf("input the price of different USB:");
    for (i = 0; i < n1; i++)
    {
        scanf("%d", &d[i]);
    }
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n1; j++)
        {
            if (k[i] + d[j] < bud && k[i] + d[j] > price)
            {
                price = k[i] + d[j];
                p = i;
                q = j;
            }
        }
    }
    if (price > 0)
    {
        printf("Buy keyboard%d and USB%d for total cost of:%d", p, q, k[p] + d[q]);
    }
    else
    {
        printf("you canoot able to buy set of keyboard and USB");
    }

    return 0;
}