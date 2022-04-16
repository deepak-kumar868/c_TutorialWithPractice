#include <stdio.h>
#include <math.h>

int main()
{
    int n, i, r, sum = 0, j = 0;
    printf("enter any binary number:");
    scanf("%d", &n);
    for (i = n; i > 0; i = i / 10)
    {
        r = i % 10;
        sum += r * pow(2, j);
        j++;
    }
    printf("the equivalent decimal is:%d", sum);

    return 0;
}