#include <stdio.h>
#include <math.h>

int main()
{
    float x, t = -1, n, ctr, m, nn;
    int i, j;
    printf("input the value of x:");
    scanf("%f", &x);
    printf("input the number of terms:");
    scanf("%f", &n);
    float sum = x;
    for (i = 1; i < n; i++)
    {
        ctr = (2 * i + 1);
        m = pow(x, ctr);
        nn = m * t;
        sum += nn;
        t = t * -1;
    }
    printf("the sum of series :%f", (float)sum);

    return 0;
}