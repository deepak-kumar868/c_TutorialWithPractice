#include <stdio.h>

int main()
{
    int n, i, d = 9, sum = 0;
    printf("input the number of terms:");
    scanf("%d", &n);
    printf("\n");
    for (i = 1; i <= n; i++)
    {
        sum += d;
        printf("%d\t", d);
        d = (d * 10) + 9;
    }
    printf("\n");
    printf("the sum of series is:%d", sum);

    return 0;
}