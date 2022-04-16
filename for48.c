#include <stdio.h>

int main()
{
    int i, n2, fact, r, st, n1, n, j;
    printf("input lower value of range:");
    scanf("%d", &n1);
    printf("input upper value of range:");
    scanf("%d", &n2);
    printf("strong nuber in this range is:\t");
    for (i = n1; i <= n2; i++)
    {
        n = i;
        st = 0;
        while (n != 0)
        {
            fact = 1;
            r = n % 10;
            for (j = 1; j <= r; j++)
            {
                fact = fact * j;
            }
            st += fact;
            n = n / 10;
                }
        if (st == i)
        {
            printf("%d\t", i);
        }
    }
    return 0;
}