#include <stdio.h>
#include <math.h>

int main()
{
    int n, a, r, i, sum = 0;
    printf("input first number of GP series:");
    scanf("%d", &a);
    printf("input number of terms in Gp series:");
    scanf("%d", &n);
    printf("input the comman ratio:");
    scanf("%d", &r);
    printf("the series is:");
    for (i = 0; i < n; i++)
    {
        printf("%f\t", a * pow(r, i));
        sum += a * pow(r, i);
    }
    printf("\n");
    printf("the sum of series is:%d", sum);

    return 0;
}