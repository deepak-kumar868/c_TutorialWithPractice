#include <stdio.h>

int main()
{
    float x, i, j, t = 1, d = 1, n;
    float sum = 1;
    printf("input the value of x:");
    scanf("%f", &x);
    printf("input the number of terms:");
    scanf("%f", &n);
    for (i = 1; i < n; i++)
    {
        d = i * d;
        t = x * t;
        sum += t / d;
    }
    printf("the sum of series :%f", (float)sum);

    return 0;
}