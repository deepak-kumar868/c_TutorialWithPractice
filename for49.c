#include <stdio.h>

int main()
{
    int n, d, a, i, tm = 0, sum = 0;
    printf("input the number of terms:");
    scanf("%d", &n);
    printf("input the starting number:");
    scanf("%d", &a);
    printf("input the comman differnce of A.P series:");
    scanf("%d", &d);
    printf("the sum of series is:");
    for (i = 0; i < n; i++)
    {
        tm = a + i * d;
        if (i != n - 1)
            printf("%d + ", tm);
        else
            printf("%d", tm);
        sum += tm;
    }
    printf("=%d", sum);

    return 0;
}