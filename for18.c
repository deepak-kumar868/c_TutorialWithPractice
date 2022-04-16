#include <stdio.h>

int main()
{
    float x, i, n, t, d = 1;
    float sum = 1;
    printf("enter the value of x:");
    scanf("%f", &x);
    printf("input the number of terms:");
    scanf("%f", &n);
    for (i = 1; i < n; i++)
    {
        t = (2 * i) * (2 * i - 1);
        d = -d * x * x / t;
        sum += d;
    }
    printf("sum of series upto :%f", (float)sum);

    return 0;
}