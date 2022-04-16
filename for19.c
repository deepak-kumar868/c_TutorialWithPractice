#include <stdio.h>

int main()
{
    float i, sum = 0;
    int n;
    printf("input the number of terms:");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        sum += 1 / i;
    }
    printf("sum of series is:%f", sum);

    return 0;
}