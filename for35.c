#include <stdio.h>

int main()
{
    int n, i, ctr = 1, ctr1 = 0, term;
    printf("input the number of terms:");
    scanf("%d", &n);
    printf("the fibonaaci series is:");
    printf("%d\t%d\t", ctr1, ctr);
    for (i = 3; i <= n; i++)
    {
        term = ctr + ctr1;
        printf("%d\t", term);
        ctr1 = ctr;
        ctr = term;
    }

    return 0;
}