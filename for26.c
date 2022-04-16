#include <stdio.h>

int main()
{
    int i, sum = 1, n, t = 1;
    printf("input the number of terms:");
    scanf("%d", &n);
    printf("the series is:");
    printf("%d\t", t);
    for (i = 1; i < n; i++)
    {
        t = (t * 10) + 1;
        printf("%d\t", t);
        sum += t;
    }
    printf("\n");
    printf("the sum of series is:%d", sum);

    return 0;
}